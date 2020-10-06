#include<stdio.h>
double triengleArea(double a,double b);
int main(){

double base,height;
printf("Enter Any base: ");
scanf("%lf",&base);
printf("Enter Any height: ");
scanf("%lf",&height);

printf("triengleArea is: %lf",triengleArea(base,height));
//triengleArea(base,height);
getch();

}
double triengleArea(double a,double b){

//printf("triengleArea is: %lf",0.5*a*b);
return 0.5*a*b;

}
