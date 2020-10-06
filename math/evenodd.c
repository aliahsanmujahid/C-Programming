#include<stdio.h>

int main()
{
    int s, i, grade, total, gradenum, finalgrade;

    printf("How many students?\n");
    scanf("%d", &s);
    i = 0;

    do
    {
        printf("Enter grade. Enter x when done.");
        scanf("%d", grade);
        total = 0;
        if (grade != 'x')
        {
            total = total + grade;
            gradenum++;
        }
        else
        {
            finalgrade = total / gradenum;
            printf("The final grade is %d", finalgrade);
            i++;
        }
    }
    while (i <= s);
    return 0;
}
