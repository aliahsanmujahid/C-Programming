#include<stdio.h>
int main(){
int a,b,c,*p1,*p2,*p3;
printf("Enter Two Numbers: ");
scanf("%d%d",&a,&b);
p1=&a;
p2=&b;
p3=&c;

*p3=*p1+*p2;

printf("\nSum = %d",c);

return 0;

}
