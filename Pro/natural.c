#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

i=1;
while(i<=n){
     printf("%d ", i);
     i++;
}

    return 0;
}
