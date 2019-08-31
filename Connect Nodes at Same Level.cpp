void connect(Node *p)
{
   queue<Node*> q1;
   q1.push(p);
   
   while(!q1.empty()){
       int flag=0;
       int n=q1.size();
       Node* temp=q1.front();
       Node* front;
       while(n>0){
           front=q1.front();
           if(flag==1){
               temp->nextRight=front;
               temp=front;
           }
           flag=1;
           q1.pop();
           if(front->left!=NULL){
               q1.push(front->left);
           }
           if(front->right!=NULL){
               q1.push(front->right);
           }
           n--;
       }
   }
}
