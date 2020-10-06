#include<iostream>
using namespace std;

const int size = 20;
int arr[size];
int count;
void adjust_from_bottom(int startindex,int endIndex){
    int item=arr[count];
    int i=count;
while(i/2>=1){
    if(arr[i/2]<item){
   arr[i]=arr[i/2];
   i=i/2;
    }
else{
  break;
}
arr[i]=item;
}
}
void Insert(int value){
if(count<size-1){
count++;
arr[count]=value;
adjust_from_bottom(count,1);
}else{

cout<<"heap is fuck"<<endl;

}
}

void print(){

cout<<"Heap: ";
for(int i=1;i<=count;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(){

Insert(50);
Insert(30);
Insert(500);
Insert(100);


print();
return 0;
}
