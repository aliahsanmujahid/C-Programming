#include<stdio.h>
int main(){

int num,num2,l;
printf("Enter First Number: ");
scanf("%d",&num);
printf("Enter Second Number: ");
scanf("%d",&num2);

l=num>num2?num:num2;
printf("Large Number is : %d",l);


}
