#include <stdio.h>

main()
{
    int num, last ;
    printf("Enter any number : ");
    scanf("%d", &num);
    last = num%10;
    printf("The last digit of entered number: %d\n", last);

    while(num>=10)
    {
        num = num/10;
    }
    printf("The first digit of entered number: %d\n", num);

}
