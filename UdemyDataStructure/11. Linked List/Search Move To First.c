#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
}*first=NULL;
//struct node *first=NULL;

void create(int a[],int n){
  int i;
  struct node *t,*last;
  first=(struct node*)malloc(sizeof(struct node));
  first->data=a[0];
  first->next=NULL;
  last=first;

  for(i=1;i<n;i++){
    t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}


struct node * Lsearch(struct node *p,int key){
struct node *q=NULL;
while(p!=NULL){
    if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
        return p;
    }

        q=p;
        p=p->next;
}
return NULL;

}
void display(struct node *p){
while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}
}

int main(){
struct node *temp;
int a[] = {1,2,3,4,5};
create(a,5);
temp = Lsearch(first,5);
temp = Lsearch(first,4);
if(temp){
    printf("Key is Found %d\n",temp->data);
}else{
   printf("Not Found\n");
}
display(first);
return 0;
}



