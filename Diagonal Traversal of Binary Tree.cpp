void helper(Node* root,vector<int>* arr[],int i,int& count){
    if(root->left==NULL && root->right==NULL){
        arr[i]->push_back(root->data);
        if(i>count){
            count=i;
        }
        return;
    }
    if(root->left!=NULL){
        helper(root->left,arr,i+1,count);
    }
    arr[i]->push_back(root->data);
    if(root->right!=NULL){
        helper(root->right,arr,i,count);
    }
    
    
}
void diagonalPrint(Node *root)
{
    vector<int>* arr[100];
    for(int i=0;i<100;i++){
        vector<int>* v=new vector<int>;
        arr[i]=v;
    }
    int count=0;
    helper(root,arr,0,count);
    for(int i=0;i<=count;i++){
        for(int j=0;j<arr[i]->size();j++){
            cout<<arr[i]->at(j)<<" ";
        }
    }
}
