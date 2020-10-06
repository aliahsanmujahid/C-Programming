#include<stdio.h>

int main(){


int a= 5;
int *p;
int **px;
int ***pxx;

p=&a;
px=&p;
pxx=&px;

printf("a=%d\n",a);
printf("&a=%d\n",&a);
printf("\n");
printf("p=%d\n",p);
printf("*p=%d\n",*p);
printf("&p=%d\n",&p);
printf("\n");
**px=50;
printf("px=%d\n",px);
printf("*px=%d\n",**px);
printf("&px=%d\n",&px);
printf("\n");
***pxx=500;
printf("pxx=%d\n",pxx);
printf("*pxx=%d\n",***pxx);
printf("&pxx=%d\n",&pxx);
return 0;
}
