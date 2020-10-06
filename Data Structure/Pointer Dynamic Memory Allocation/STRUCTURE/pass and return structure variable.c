#include<stdio.h>

struct complex{
int real,imag;
};

struct complex sum(struct complex,struct complex);

int main(){
struct complex c1,c2,c3;

printf("Enter First Complex No.: ");
scanf("%d%d",&c1.real,&c1.imag);
printf("Enter Second Complex No.: ");
scanf("%d%d",&c2.real,&c3.imag);
c3=sum(c1,c2);

if(c3.imag>=0)
   printf("\n%d +i %d",c3.real,c3.imag);
else
     printf("\n%d -i %d",c3.real,-c3.imag);

getch();
}

struct complex sum(struct complex c1,struct complex c2){
struct complex t;
t.real = c1.real+c2.real;
t.imag = c1.imag+c2.imag;
return t;
};



