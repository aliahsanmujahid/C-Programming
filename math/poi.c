#include<stdio.h>
int main(){

int num1,lcd,gcd,num2,n1,n2,rem;

printf("Enter Any Number: ");
scanf("%d %d",&num1,&num2);

n1= num1;
n2 = num2;

while(n2!=0){

  rem = n1%n2;
  n1 = n2;
  n2 = rem;
}
 gcd = n1;
 lcd = (num1*num2)/gcd;

 printf("GCD: %d\n",gcd);
 printf("LCD: %d\n",lcd);

}
