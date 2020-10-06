#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};

node* head=NULL;

void print(){
node*tptr = head;
while(tptr!=NULL){
    cout<<tptr->data<<" <- ";
    tptr = tptr->next;
}
cout<<endl;
}

void addfirst(int value){

node *nptr = new node;
nptr->data = value;
nptr->next = NULL;

if(head==NULL){
    head=nptr;
}else{
nptr->next=head;
head=nptr;
}
}

void removevalue(int value){
if(head==NULL){
cout<<"List is Empty"<<endl;
}else if (head->data==value){
head=head->next;
}else{
  node* tptr = head;
  while(tptr->next!=NULL&&tptr->next->data!=value){
    tptr=tptr->next;
  }
   if(tptr->next==NULL){
     cout<<"not found"<<endl;
   }else{
     tptr->next=tptr->next->next;
   }
}

}

int main(){

addfirst(11);
addfirst(22);
addfirst(33);
addfirst(44);
print();

removevalue(4);
print();
return 0;
}


