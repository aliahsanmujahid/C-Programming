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

void removeFirst(){
if(head==NULL){
cout<<"List is Empty"<<endl;
}else{
head=head->next;

}
}

int main(){

addfirst(11);
addfirst(22);
addfirst(33);
addfirst(44);
print();

removeFirst();
print();
removeFirst();
print();
removeFirst();
print();
removeFirst();
print();
removeFirst();
print();
return 0;
}
