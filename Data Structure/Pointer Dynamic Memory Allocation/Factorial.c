#include<stdio.h>
int main(){
int n,*p,f=1,i;
printf("Enter a Numbers: ");
scanf("%d",&n);
p=&f;

for(i=1;i<=n;i++){

   *p = (*p)*i;
}

printf("Factorial = %d",f);

return 0;

}

