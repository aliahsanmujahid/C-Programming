
#include<stdio.h>
#include<conio.h>

struct BST{
int data;
struct BST *left,*right;

};

typedef struct BST node;
node *root=NULL;
node *createNode(int n){

   node *newnode;
   newnode=(node*)malloc(sizeof(node));
   newnode->data=n;
   newnode->left=newnode->right=NULL;
   return newnode;
}
node *insert(node *root,int n){
 if(root==NULL){
    root=createNode(n);
 }else if(n<=root->data){
 root->left=insert(root->left,n);
 }else
 root->right=insert(root->right,n);
 return root;
}
void level_order(node *root){
node *ptr =root;
if(ptr==root){
    printf("Tree Is Empty.")
    return;
}

}
int main(){
int n;
char ch;
do{
printf("\nEnter A Number: ");
scanf("%d",&n);
root=insert(root,n);
printf("\nDo You want to insert more:(y/n)?");
ch=getche();
}while(ch=='y'||ch!='n');
printf("After Traversing We get: ");
level_order(root);
getch();
return 0;
}
