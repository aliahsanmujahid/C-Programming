#include<stdio.h>

int main(){

int num,sum=0,i;
printf("Enter Any Number: ");
scanf("%d",&num);
printf("1+2+3+....%d\n",num);
for(i=1;i<=num;i++){

sum = sum+i;
}
printf("Total is %d",sum);
}
