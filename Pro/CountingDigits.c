#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter A Number: ");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        printf(" %d",n);
        count++;

    }
    printf("\nTotal %d",count);

    getch();
}
