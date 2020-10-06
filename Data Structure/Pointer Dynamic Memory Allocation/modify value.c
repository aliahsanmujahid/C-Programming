
#include<stdio.h>
int main(){
int a=5;
int *p;
int **px;
int ***pxx;

p=&a;
px=&p;
pxx=&px;
a=a+*p;

printf("a=%d\n",a);
printf("p=%d\n",*p);


*p = *p +a;

printf("a=%d\n",a);
printf("p=%d\n",*p);

**px = 50;

printf("a=%d\n",a);
printf("px=%d\n",**px);

***pxx = 500;

printf("a=%d\n",a);
printf("pxx=%d\n",***pxx);
return 0;
}
