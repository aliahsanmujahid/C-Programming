#include<stdio.h>

void fun(int n){
if(n>0){
    fun(n-1);//2
    printf("%d ",n);
    //fun(n-1);
}
}

void main(){
int x=3;
fun(x);
}


