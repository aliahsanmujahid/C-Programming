#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter any Even Number: ");
    scanf("%d",&n);
i=1;
while(i<=n){

     if(i%2==0){
            printf("%d ",i);
       sum=sum+i;
     }
     i++;
}
    printf("\n%d ",sum);
    getch();
}
