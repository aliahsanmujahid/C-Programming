


#include<stdio.h>
#include<stdlib.h>
int main(){
const int a=10;
int *p;
p=(int*)&a;
printf("\nValue of a %d",a);
*p=20;
printf("\nAfter Modify Value of a %d",*p);

getch();

}


