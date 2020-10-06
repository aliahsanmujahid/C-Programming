/*Call By Value
*/
#include<stdio.h>
void swap(int*,int*);
int main(){
int a,b;
printf("Enter Two Value : ");
scanf("%d%d",&a,&b);
printf("Before Swapping %d, %d\n",a,b);
swap(&a,&b);
printf("After Swapping %d, %d",a,b);
getch();

}

void swap(int *p,int *q){

int r;
r=*p;
*p=*q;
*q=r;

}
