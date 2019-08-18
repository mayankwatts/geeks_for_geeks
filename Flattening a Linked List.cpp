#include<vector>
#include<algorithm>

Node *flatten(Node *root)
{
   // Your code here
   vector<int> v;
   Node* temp=root;
   while(temp!=NULL){
       
       v.push_back(temp->data);
       Node* temp1=temp->bottom;
       if(temp1!=NULL){
           while(temp1->bottom!=NULL){
               v.push_back(temp1->data);
               temp1=temp1->bottom;
           }
           v.push_back(temp1->data);
           temp1->bottom=temp->next;
           temp->next=NULL;
           temp=temp1->bottom;
       }
       else{
           temp->bottom=temp->next;
           temp->next=NULL;
           temp=temp->bottom;
       }
       
   }
   sort(v.begin(),v.end());
   temp=root;
   int i=0;
   while(temp!=NULL){
       temp->data=v[i];
       i++;
       temp=temp->bottom;
   }
   return root;
}
