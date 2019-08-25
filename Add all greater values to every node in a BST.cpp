int modif(Node **root,int dat){

    if((*root)->left==NULL && (*root)->right==NULL){
        (*root)->data+=dat;
        return ((*root)->data);
    }
    if((*root)->right!=NULL){
        int a=modif(&(*root)->right,dat);
        (*root)->data+=a;
    }
    
    
    if((*root)->left!=NULL){
        if((*root)->right==NULL){
            (*root)->data+=dat;
        }
        int b=modif(&(*root)->left,(*root)->data);
        return b;
    }
        return ((*root)->data);
    
}


void modify(Node **root)
{

int ans=modif(root,0);

}
