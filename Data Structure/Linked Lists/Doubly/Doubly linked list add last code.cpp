#include<iostream>
using namespace std;


struct node{
 int data;
 node* pre;
 node* next;
};

node* head=NULL;

void print(){
  cout<<"Current List ";
  node* tptr=head;
  while(tptr!=NULL){
    cout<<tptr->data<<" -> ";
    tptr=tptr->next;
  }
  cout<<endl;
}

void addlast(int value){
  node* tptr;
  node* nptr=new node;
  nptr->pre=NULL;
  nptr->data=value;
  nptr->next=NULL;

  if(head==NULL){
    head=nptr;
    tptr=head;
  }else{
    tptr->next=nptr;
    nptr->pre=tptr;
    tptr=nptr;
  }

}

int main(){

addlast(1);
print();
addlast(2);
print();
addlast(3);
print();
addlast(4);
print();
addlast(5);
print();

}
