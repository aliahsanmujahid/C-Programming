



#include<stdio.h>
#include<stdlib.h>
struct complex{
int real,imag;
};
int main(){
struct complex c1,c2,c3,*p1,*p2,*p3;
printf("\nEnter First complex number: ");
scanf("%d%d",&c1.real,&c1.imag);
printf("\nEnter Second complex number: ");
scanf("%d%d",&c2.real,&c2.imag);
p1=&c1;
p2=&c2;
p3=&c3;
p3->real=p1->real+p2->real;
p3->imag=p1->imag+p2->imag;

if(c3.imag>=0)
printf("\n%d +i %d",c3.real,c3.imag);
else
    printf("\n%d -i %d",c3.real,abs(c3.imag));
getch();

}




