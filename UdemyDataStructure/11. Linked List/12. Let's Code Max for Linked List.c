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

int Max(struct node *p) {
      int max=-32768;
            while(p)    {
           if(p->data>max)
        max=p->data;
            p=p->next;
         }
         return max;

 }


int main(){

int a[] = {1,2,3,4,5};
create(a,5);
printf("Max %d\n",Max(first));
return 0;
}

