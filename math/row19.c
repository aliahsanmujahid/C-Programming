#include <stdio.h>

int main()
{
    int i, j, N,h;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            h=N - i + 1;
            printf("%d ",h);

        }
        if(h==3){
          break;
         }
        printf("\n");
    }

    getch();
}
