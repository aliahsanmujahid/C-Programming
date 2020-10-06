#include<iostream>
#include<conio.h>
using namespace std;
void recursion(int value){
int sum = 0;
if(value>0){

   sum = sum+value;
   cout <<"Value = "<<value<<";sum = "<<sum<<endl;
   recursion(value-1);
}
}
int main(){

recursion(5);

getch();
}


