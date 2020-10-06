#include <stdio.h>

int main()
{
    int col, row, n;

    printf("Enter value of n : ");
    scanf("%d", &n);


    for(row=n/2; row<=n; row=row+2)
    {
        for(col=1; col<=n-row; col=col+2)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }

        for(col=1; col<=row; col++)
        {
            printf("*");
        }

        printf("\n");
    }

       for(row=n; row>=1; row--)
    {
        for(col=row; col<n; col++)
        {
            printf(" ");
        }

        for(col=1; col<=(row*2)-1;col++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
