void serialize(Node *root,vector<int> &A)
{
    if(root==NULL){
        return;
    }
    queue<struct Node*> q;
    A.push_back(root->data);
    q.push(root);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front->left!=NULL){
            q.push(front->left);
            A.push_back(front->left->data);
        }
        else{
            A.push_back(-1);
        }
        if(front->right!=NULL){
            q.push(front->right);
            A.push_back(front->right->data);
        }
        else{
            A.push_back(-1);
        }
    }
}
/*this function deserializes
 the serialized vector A*/
Node * deSerialize(vector<int> &A)
{
   if(A.size()==0){
       return NULL;
   }
   
   struct Node* root=newNode(A[0]);
   queue<Node*> q;
   q.push(root);
   int i=1;
   while(!q.empty() && i<A.size()){
       Node* front=q.front();
       q.pop();
       if(A[i]!=-1){
           struct Node* temp=newNode(A[i]);
           front->left=temp;
           q.push(temp);
       }
       else{
           
       }
       i++;
       if(A[i]!=-1){
           struct Node* temp=newNode(A[i]);
           front->right=temp;
           q.push(temp);
       }
       else{
           
       }
       i++;
   }
   return root;
   
}
