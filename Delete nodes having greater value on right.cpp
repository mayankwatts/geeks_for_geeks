#include<map>
Node *compute(Node *head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int* arr=new int[count];
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
    int k=0;
    temp=head;
    while(temp!=NULL){
        arr[k]=temp->data;
        temp=temp->next;
        k++;
    }
    for(int i=0;i<count-1;i++){
        if(arr[i]<arr[i+1]){
            int j=i;
            while(j>=0 && arr[j]<arr[i+1]){
                arr[j]=-1;
                j--;
            }
        }
    }
    temp=head;
    Node* prev=NULL;
    k=0;
    while(k<count){
        if(arr[k]!=-1){
            temp->data=arr[k];
            prev=temp;
            temp=temp->next;
        }
        k++;
    }
    prev->next=NULL;
    return head;

}
