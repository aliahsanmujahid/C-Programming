#include<stdio.h>
int main(){
int a,b,c,*p1,*p2;
printf("Enter Two Numbers: ");
scanf("%d%d",&a,&b);

p1=&a;
p2=&b;

c=*p1;
*p1=*p2;
*p2=c;

printf("After Swap");
printf("\na = %d",a);
printf("\nb = %d",b);

return 0;

}
