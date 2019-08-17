/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted


void deleteNode(Node *node)
{
   // Your code here
   while(node->next->next!=NULL){
       node->data=node->next->data;
       node=node->next;
   }
   Node* temp=node->next;
   node->data=temp->data;
   node->next=NULL;
   delete temp;
}
