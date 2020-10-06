

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

void removelast(){
if(head==NULL)
cout<<"Link is Empty"<<endl;
else if(head->next==NULL)
    head=NULL;
else{
    node* tptr=head;
    while(tptr->next->next!=NULL){
    tptr=tptr->next;
    }
    tptr->next=NULL;
}
}
int main(){

addfirst(1);
addfirst(2);
addfirst(3);
addfirst(4);
addfirst(5);
print();

removelast();
print();
removelast();
print();
removelast();
print();
removelast();
print();
removelast();
print();
removelast();
print();

}

