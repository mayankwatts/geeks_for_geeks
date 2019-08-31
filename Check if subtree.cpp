#include<iostream>
using namespace std;
#define MAX 1000

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

bool isSubtree(Node *T, Node *S);

void storeInorder(Node *, char[], int &);

void storePreOrder(Node *, char[], int &);


int main() {
    int t;

    scanf("%d", &t);
    while (t--) {
        struct Node *child = NULL;
        map<int, Node *> m;
        int n;
        scanf(" %d\n", &n);
        struct Node *t2 = NULL;
        while (n--) {
            Node *parent;
            char lr;
            int n1, n2;
            scanf("%d %d %c", &n1, &n2, &lr);

            if (m.find(n1) == m.end()) {
                parent = new Node(n1);
                m[n1] = parent;
                if (t2 == NULL) t2 = parent;
            } else
                parent = m[n1];
            child = new Node(n2);
            if (lr == 'L')
                parent->left = child;
            else
                parent->right = child;
            m[n2] = child;
        }
        struct Node *child1;
        map<int, Node *> m1;
        int nodes;
        scanf("%d\n", &nodes);
        struct Node *t1 = NULL;
        while (nodes--) {
            Node *parent1;
            char lr1;
            int n3, n4;
            scanf("%d %d %c", &n3, &n4, &lr1);
            if (m1.find(n3) == m1.end()) {
                parent1 = new Node(n3);
                m1[n3] = parent1;
                if (t1 == NULL) t1 = parent1;
            } else
                parent1 = m1[n3];

            child = new Node(n4);
            if (lr1 == 'L')
                parent1->left = child;
            else
                parent1->right = child;
            m1[n4] = child;
        }

        cout << isSubtree(t1, t2);
        cout << endl;
    }


#include<vector>
void helper(Node* root,vector<int>& v){
    if(root==NULL){
        v.push_back(-1);
        return;
    }
    helper(root->left,v);
    helper(root->right,v);
    v.push_back(root->data);
    
    
}
bool isSubtree(Node* T1, Node* T2) {
    vector<int> v1;
    vector<int> v2;
    helper(T1,v1);
    helper(T2,v2);
    for(int i=0;i<v1.size();i++){
        if(v1[i]==v2[0]){
            int j=0;
            while(v1[i]==v2[j] && i<v1.size() && j<v2.size()){
                i++;
                j++;
            }
            if(j==v2.size()){
                return true;
            }
        }
    }
    return false;
}
