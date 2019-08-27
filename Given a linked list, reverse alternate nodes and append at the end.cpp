struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
void rearrange(struct node*);
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void insert()
{
    int n,value,i;
    //  cin>>n;
    scanf("%d",&n);
    struct node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            start=(struct node *) malloc( sizeof(struct node) );
            start->data=value;
            start->next=NULL;
            temp=start;
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


int main()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        insert();
        rearrange(start);
        printList(start);
    }
    return 0;
}

void  rearrange(struct node *odd)
{
    struct node* root=odd;
    struct node* head=NULL;
    struct node* append=NULL;
    while(root->next!=NULL && root->next->next!=NULL){
        if(append==NULL){
            append=root->next;
            root->next=append->next;
            append->next=NULL;
            root=root->next;
            head=append;
        }
        else{
            append->next=root->next;
            append=append->next;
            root->next=append->next;
            append->next=NULL;
            root=root->next;
        }
    }
    if(root->next!=NULL && head==NULL){
        return;
    }
    if(root->next!=NULL){
        append->next=root->next;
        root->next=NULL;
        append=append->next;
    }
    int count=0;
    struct node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    int arr[count];
    for(int i=0;i<count;i++){
        arr[i]=temp->data;
        temp=temp->next;
    }
    temp=head;
    for(int i=count-1;i>=0;i--){
        temp->data=arr[i];
        temp=temp->next;
    }
    root->next=head;
}
