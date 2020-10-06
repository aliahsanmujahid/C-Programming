


#include<stdio.h>
#include<stdlib.h>
struct Number{
int a;
float b;
char c;
};
int main(){
struct Number N,*p;
N.a=10;
N.b=12.5;
N.c='A';
p=&N;
printf("\n a=%d",p->a);
printf("\n b=%f",p->b);
printf("\n c=%c",p->c);

getch();

}



