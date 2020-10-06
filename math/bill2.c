#include<stdio.h>

int main(){

float tk,bill,unit;
printf("Enter Units: ");
scanf("%f",&unit);

switch  (unit){

case 30:
//case (unit<59):
    tk=5.00;
    bill=unit*tk;
    printf("%f",bill);
    break;
case 60:
//case (unit<79):
    tk=3.50;
    bill=unit*tk;
    printf("%f",bill);
    break;
case 80:
//case (unit<99):
    tk=3.00;
    bill=unit*tk;
    printf("%f",bill);
    break;
case 100:
    tk=2.00;
    bill=unit*tk;
    printf("%f",bill);
    break;
default:
      printf("Input a valid Input");
}
return 0;
}

