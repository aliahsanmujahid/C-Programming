#include<iostream>
using namespace std;


struct node{
  int data;
  node *next;
};

node*head=NULL;

void print(){
    node*tptr=head;
    while(tptr!=NULL){
     cout<<tptr->data<<endl;
     tptr=tptr->next;
    }

}
void create(int value){
  node* tptr;
  node* nptr=new node;
  nptr->data=value;
  nptr->next=NULL;

  if(head==NULL){
    head = nptr;
    tptr=head;
  }else{
    tptr->next = nptr;
    tptr=nptr;
  }
}

int main(){

create(1);
create(4);
create(5);
create(8);
create(3);

print();

}
