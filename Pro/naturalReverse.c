#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

i=n;
while(i>=1){
     printf("%d ", i);
     i--;
}

   getch();
}
