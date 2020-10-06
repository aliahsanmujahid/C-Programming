#include<stdio.h>
int main(){

int a[10]={1,2,3,4,5,6,7,8,9,10},*p,max=-1,min=232323,i;
printf("Enter 10 Number: ");
//for(i=0;i<10;i++)
 //   scanf("%d",&a[i]);
//p=&a[0];
//p=&a;
p=a;
for(i=0;i<10;i++){

    if(*p>max)
        max=*p;

    if(*p<min)
        min=*p;
p++;
}
printf("\nMaximum = %d\n",max);
printf("Minimum = %d",min);

getch();

}



