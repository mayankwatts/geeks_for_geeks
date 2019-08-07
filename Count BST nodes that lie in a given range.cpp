#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
Node *insert(Node *root,int data)
{
    if(root==NULL)
    root=new Node(data);
    else if(data<root->data)
    root->left=insert(root->left,data);
    else
    root->right=insert(root->right,data);
    
    return root;
}
//Position this line where user code will be pasted.
int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=insert(root,arr[i]);
        }
        int l,h;
        cin>>l>>h;
        cout<<getCountOfNode(root,l,h)<<endl;
    
        
    }
	return 0;
}

void helper(Node* root,int l,int h,int& count){
    if(l>=h){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        if(root->data>=l && root->data<=h){
            count++;
        }
        return;
    }
    if(root->data<l && root->right!=NULL){
        helper(root->right,l,h,count);
    }
    if(root->data>h && root->left!=NULL){
        helper(root->left,l,h,count);
    }
    if(root->data>=l && root->data<=h){
        count++;
        if(root->left!=NULL)
        helper(root->left,l,root->data,count);
        if(root->right!=NULL)
        helper(root->right,root->data,h,count);
    }
}
int getCountOfNode(Node *root, int l, int h)
{
    int count=0;
    helper(root,l,h,count);

    return count;
}
