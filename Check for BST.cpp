#include<climits>
bool bst(Node* root,int l,int h){
    if(root==NULL){
        return true;
    }
    
    if(root->data>h || root->data<l){
        return false;
    }
    
    bool out1=bst(root->left,l,root->data);
    bool out2=bst(root->right,root->data,h);
    
    return out1&&out2;
}
bool isBST(Node* root) {
    // Your code here
    int l=INT_MIN;
    int h=INT_MAX;
    
    bool ans=bst(root,l,h);
}
