#include<stdio.h> // include stdio.h library

int main(void)
{
    int num, rem, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10; // get the right-most digit
        prod *= rem; // calculate product of digits
        num /=  10;  // remove the right-most digit
    }

    printf("%d", prod);

    getch();
}
