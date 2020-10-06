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

void addfirst(int value){
  node* tptr;
  node* nptr=new node;
  nptr->pre=NULL;
  nptr->data=value;
  nptr->next=NULL;

  if(head==NULL){
    head=nptr;
    tptr=head;
  }else{
    nptr->next=tptr;
    tptr->pre=nptr;
    tptr=nptr;
    head=tptr;
  }

}

int main(){

addfirst(1);
print();
addfirst(2);
print();
addfirst(3);
print();
addfirst(4);
print();
addfirst(5);
print();

}

