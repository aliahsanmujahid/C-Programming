#include<stdio.h>

struct Node{
int data;
struct Node *link;
};
struct Node *head;

void print(){
struct Node *temp;
temp = head;

while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->link;
}
printf("\n");
}

void inserte (int value){
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data = value;
   temp->link=NULL;
   if(head==NULL){
    head=temp;
   }else{
    struct Node* t;
    t=head;
    while(t->link!=NULL){
        t=t->link;
    }
    t->link =temp;
   }

}

void insert(int value){
struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
temp1->data=value;
if(head=NULL||temp1->data<head->data){
  temp1->link=head;
  head=temp1;
}
else{
struct Node*pred=head;
struct Node*p=pred->link;
while(temp1->data>p->data&&p!=NULL){
    pred=p;
    count<<p->data<<endl;
    p=p->link;
}
pred->link=temp1;
temp->link = p;
}

}

int main(){
head = NULL;
inserte(10);
inserte(4);
inserte(3);
inserte(1);

insert(12);
print();
return 0;
}


