#include<bits/stdc++.h>
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

void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        *tree = new Node(val);
        return;
    }
    if(val < (*tree)->data)
    { insert(&(*tree)->left, val);}
    else if(val > (*tree)->data)
    { insert(&(*tree)->right, val);}
}

void merge(Node *root1,Node *root2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root1;Node *root2;
        Node *tmp;
        root1 = NULL;
        root2=NULL;
        int N;
        cin>>N;
        int M;
        cin>>M;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root1, k);}
        for(int i=0;i<M;i++)
        {
            int k;
            cin>>k;
            insert(&root2, k);} 
       merge(root1,root2);
        cout<<endl;
    }
}

void helper(Node* root,vector<int>& v){
    if(root==NULL){
        return;
    }
    helper(root->left,v);
    v.push_back(root->data);
    helper(root->right,v);
    
}

void merge(Node *root1, Node *root2)
{
    vector<int> va;
    vector<int> vb;
    helper(root1,va);
    helper(root2,vb);
    int i=0;
    int j=0;
    while(i<va.size() && j<vb.size()){
        if(va[i]<vb[j]){
            cout<<va[i]<<" ";
            i++;
        }
        else{
            cout<<vb[j]<<" ";
            j++;
        }
    }
    if(i==va.size()){
        while(j<vb.size()){
            cout<<vb[j]<<" ";
            j++;
        }
    }
    else{
        while(i<va.size()){
            cout<<va[i]<<" ";
            i++;
        }
    }
}
