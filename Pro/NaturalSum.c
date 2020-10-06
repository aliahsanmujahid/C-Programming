
#include <stdio.h>

int main()
{
    int i, n,sum=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Sum of Natural numbers from 1 to %d : \n", n);

i=1;
while(i<=n){
     sum =sum+i;
     i++;
}
    printf("%d ", sum);

  getchar();
}
