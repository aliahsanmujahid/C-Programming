
#include <stdio.h>

int main()
{
   int array[]={10,20,20,30,40,50}, search, c, n, count = 0;


   printf("Enter a number to search: ");
   scanf("%d", &search);

   for (c = 0; c < 6; c++) {
      if (array[c] == search) {
         printf("%d is present at location %d.\n", search, c+1);
         count++;
      }
   }
   if (count == 0)
      printf("%d isn't present in the array.\n", search);
   else
      printf("%d is present %d times in the array.\n", search, count);

   return 0;
}
