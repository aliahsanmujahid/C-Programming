#include<stdio.h>

void claclulate(double base,double exp){

double result=1,i;
for(i=1;i<=exp;i++){

    result=result*base;
}
printf("Power is %lf",result);



}

int main(){

double base,exp;
printf("Enter Base: ");
scanf("%lf",&base);
printf("Enter Exponent: ");
scanf("%lf",&exp);

claclulate(base,exp);

getch();

}
