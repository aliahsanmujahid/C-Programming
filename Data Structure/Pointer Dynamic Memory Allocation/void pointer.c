#include<stdio.h>
int main(){
int a=5;
float b=10.5;
void *p;
p=&a;

printf("Value of a = %d\n",*(int*)p);
p=&b;

printf("Value of a = %f\n",*(float*)p);
getch();

}


