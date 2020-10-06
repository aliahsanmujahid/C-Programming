#include<stdio.h>

struct node{
int data;
struct node*link;
};

struct node* head=NULL;
void print(){

struct node* temp;
temp=head;
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->link;
}
}

void insert(int value){
struct node* temp = (struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->link=head;
head=temp;

}

int main(){
    insert(1);
    insert(3);
    insert(5);

    print();
return 0;
}
