#include<stdio.h>
int main(){

int a,*p;
float b,*q;
char c,*r;
p=&a;
q=&b;
r=&c;
//printf("\n%p,%p,%p",p,q,r);
printf("\n%d,%d,%d",p,q,r);
p++;
q++;
r++;
//printf("\n%p,%p,%p",p,q,r);
printf("\n%d,%d,%d",p,q,r);

getch();

}

