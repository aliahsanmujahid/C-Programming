
#include<stdio.h>
struct complex{
int real;
int img;
};
struct complex sum(struct complex,struct complex);

int main(){
struct complex c1,c2,c3;
printf("\nEnter First Value: ");
scanf("%d%d",&c1.real,&c1.img);
printf("\nEnter First Value: ");
scanf("%d%d",&c2.real,&c2.img);
c3=sum(c1,c2);
printf("\nReal = %d,IMAG = %d",c3.real,c3.img);
getch();
}
struct complex sum(struct complex c1,struct complex c2){
struct complex t;
t.real = c1.real+c2.real;
t.img = c1.img+c2.img;
return t;
}





