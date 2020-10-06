#include <stdio.h>
int sumofdigits(int);
int main()
{
    int num,result;
    printf("Enter A Number: ");
    scanf("%d",&num);
    result=sumofdigits(num);
    printf("Sum=%d",result);
    getch();
};
int sumofdigits(int num){
if(num==0)
   return 0;
else
   return ((num%10) + sumofdigits(num/10));
}




