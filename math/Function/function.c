#include<stdio.h>

void sum(int a, int b){

printf("The Sum Is: %d\n",a+b);

}
void sub(int a, int b){

printf("The sub Is: %d\n",a-b);

}

int main(){

//int num1,num2;
//printf("Enter Two Number: ");
//scanf("%d%d",&num1,&num2);
//int result = sum(5,6);
//printf("The Sum Is: %d\n",result);//sum(num1,num2)

sum(2,6);
sum(6,3);
sub(6,4);
sub(6,9);

getch();

}

