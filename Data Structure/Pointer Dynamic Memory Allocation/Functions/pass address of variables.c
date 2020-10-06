#include<stdio.h>
void swap(int*,int*);
int main(){
int a,b;
printf("\nEnter Two Value: ");
scanf("%d%d",&a,&b);
swap (&a,&b);
printf("\nSwap:a= %d,b= %d",a,b);
getch();
}
void swap(int *p,int *q){

int t;
t=*p;
*p=*q;
*q=t;

}


