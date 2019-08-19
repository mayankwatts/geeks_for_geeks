#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};

void bottomView(Node *root);

int main()
{
  int t;
  struct Node *child;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d\n",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);

        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }

     bottomView(root);
     cout << endl;
  }
  return 0;
}

void helper(Node* root,map<int,vector<int>>& mp,int i){
    if(root==NULL){
        return;
    }
    mp[i].push_back(root->data);
    helper(root->left,mp,i-1);
    helper(root->right,mp,i+1);
}

void bottomView(Node *root)
{
   map<int,vector<int>> mp;
   helper(root,mp,0);
   for(auto it=mp.begin();it!=mp.end();it++){
       cout<<it->second.at(it->second.size()-1)<<" ";
   }

