#include<stdio.h>

int main(){

float tk,bill,unit;
printf("Enter Units: ");
scanf("%f",&unit);


if(unit>=30&&unit<=59){
        tk=5.00;
        bill=unit*tk;
        printf("%f",bill);

}else if(unit>=60&&unit<=79){
    tk=3.50;
    bill=unit*tk;
    printf("%f",bill);
}

else if(unit>=80&&unit<=99){
    tk=3.00;
    bill=unit*tk;
    printf("%f",bill);
}
else if(unit>=100){

    tk=2.00;
    bill=unit*tk;
    printf("%f",bill);
}else{
 printf("Input a valid Input");
}

return 0;
}

