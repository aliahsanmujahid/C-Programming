#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* link;
};
struct Node* head;

void print(){

struct Node* temp;
temp=head;

while(temp!=NULL){

    printf("\n%d",temp->data);
    temp=temp->link;
}

}
int main(){
    head=NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    head->data=5;

    head->link=(struct Node*)malloc(sizeof(struct Node));
    head->link->data=50;


    head->link->link=NULL;


    print();
getch();
return 0;
}
