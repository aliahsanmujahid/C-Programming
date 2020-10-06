
#include <stdio.h>

int main()
{
   int n, reverse = 0,t;

   printf("Enter a number to reverse\n");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t       = t/10;
   }

   if(n==reverse){
    printf("Palindrome");
   }else{
       printf("Not Palindrome");
   }

   return 0;
}
