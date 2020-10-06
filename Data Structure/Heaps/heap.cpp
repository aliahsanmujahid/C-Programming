#include<iostream>
using namespace std;

int main(){

int heap[30],n,i;
cout<<"\n Enter the number of element: ";
cin>>n;

heap[0]= n;

cout<<"\n Enter Elements: ";

for(i= 1;i<n;i++){
  cin>>heap[i] ;
}
cout<<"\n Elements Are: ";

for(i= 1;i<n;i++){
  cout<<heap[i]<<" ";
}

for(i=n/2;i>=n;i--){
    down_adjust(heap,i);
}
}

void down_adjust(int heap[30],int i){
    j=2*i;
    while(j<=n){

    }
}
