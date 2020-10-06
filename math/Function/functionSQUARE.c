#include<stdio.h>
double square(double a);
int main(){

double num;
printf("Enter Any Integer: ");
scanf("%lf",&num);


printf("The Square Is: %lf\n",square(num));


getch();

}

double square(double a){

return a*a;

}
