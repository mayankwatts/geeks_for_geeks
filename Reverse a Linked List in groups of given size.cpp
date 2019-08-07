#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head;
struct node *reverse (struct node *head, int k);

  void insert()
{
    int n,value,i;
    scanf("%d",&n);
    struct node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
printf("
");
}

int main(void)
{
   
    int t,k,value,n;
     
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     head = reverse(head, k);
     printList(head);
     }
     return(0);
}

struct node *reverse (struct node *head, int k)
{ 
  int* arr = new int[k];
  int x,i;
  struct node* temp1=head;
  struct node* temp2=head;
  while(temp2!=NULL){
      x=k;
      i=0;
      while(x>0 && temp2!=NULL){
         arr[i]=temp2->data;
         temp2=temp2->next;
         i++;
         x--;
      }
      for(int j=k-x-1;j>=0;j--){
          temp1->data=arr[j];
          temp1=temp1->next;
      }
  }
  delete[] arr;
  return head;
  
}
