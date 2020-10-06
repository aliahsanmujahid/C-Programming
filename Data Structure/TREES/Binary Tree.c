#include<stdio.h>
#include<conio.h>

struct BST{
int data;
struct BST *left,*right;

};
typedef struct BST node;

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

int search(node *root,int number){

if(root==NULL){
    return 0;
}else if(number==root->data)
return 1;
else if(number<=root->data)
    return search(root->left,number);
else
    return search(root->right,number);
}
int main(){
node *root=NULL;
int n;
char ch;
do{
printf("\nEnter A Number: ");
scanf("%d",&n);
root=insert(root,n);
printf("\nDo You want to insert more:(y/n)?");
ch=getche();
}while(ch=='y'||ch!='n');

for(;;){
int number;
printf("\nEnter A Number To Search: ");
scanf("%d",&number);
if(search(root,number)==1)
printf("\nItem Found");
else
  printf("\nItem Not Found");
}
getch();
return 0;
}
