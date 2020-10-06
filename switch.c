#include<stdio.h>
int main(){

int c,t,math;
printf("1. For Fahrenheit to Celsius\n");
printf("2. For Celsius to Fahrenheit\n");
printf("Enter Your Choice: ");
scanf("%d",&c);

switch(c){

case 1:
    {
        printf("Enter the Fahrenheit Temperature: ");
        scanf("%d",&t);
        math = (t-32)/1.8;
        printf("Celsius is: %d",math);
        break;

    }

case 2:
    {
        printf("Enter the Celsius Temperature: ");
        scanf("%d",&t);
        math = (1.8*t)+32;
        printf("Fahrenheit is: %d",math);
        break;

    }
default:
        printf("Not A Correct Option");
}
getch();
}

