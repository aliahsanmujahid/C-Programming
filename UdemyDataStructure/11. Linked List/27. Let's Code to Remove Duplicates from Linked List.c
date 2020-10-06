#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
}*first=NULL;
//struct node *first=NULL;

void display(struct node *p){
while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}
}



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

void RemoveDuplicate(struct node *p)
{

 struct node *q=p->next;

 while(q!=NULL)
 {
 if(p->data!=q->data)
 {
 p=q;
 q=q->next;
 }
 else
 {
 p->next=q->next;
 free(q);
 q=p->next;
 }
 }

}

int main(){

int a[] = {20,20,20};
create(a,3);


 RemoveDuplicate(first);

 display(first);

 return 0;
}
