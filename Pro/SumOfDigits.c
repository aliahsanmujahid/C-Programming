#include <stdio.h>
#include <math.h>
int main(){
    int n,t,remainder,sum=0;
printf("Enter A Number: ");
scanf("%d",&n);
t=n;
while(t!=0){
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
}

printf("%d Sum = %d",n,sum);

}
