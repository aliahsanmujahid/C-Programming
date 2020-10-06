
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

void display(struct node *p){
while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}
}
int count(struct node *p){
int c=0;
while(p){
    c++;
    p=p->next;
}
return c;
}
int add(struct node *p){
int sm=0;
while(p){
    sm=sm+p->data;
    p=p->next;
}
return sm;
}
int main(){

int a[] = {1,2,3,4,5};
create(a,5);
display(first);
int c=count(first);
printf("\nALL = %d ",c);
int s=add(first);
printf("\nSum = %d ",s);
return 0;
}
