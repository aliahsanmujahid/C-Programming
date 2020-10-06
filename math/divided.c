#include<stdio.h>
int main(){

double sum=0,i,n;

printf("enter number: ");
scanf("%lf",&n);

for(i=1;i<=n;i=i+2){

    sum=sum+(1/i);
if(i==1)
    printf("\n1 + ");
else if(i==n)
    printf("1/.2%lf)+ ",i);
else
    printf("1/%.2lf)+ ",i);

}
printf("= %.2lf ",sum);

}
