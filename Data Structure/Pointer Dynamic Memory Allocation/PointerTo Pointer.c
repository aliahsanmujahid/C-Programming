#include<stdio.h>
int main(){
int a=5,*p,**pp;
p=&a;
pp=&p;
//**pp=500;
printf("%d %d %d",a,*p,**pp);

getch();

}

