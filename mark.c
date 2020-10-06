#include <stdio.h>
int main()
{
while(1){
   int mark;
   printf("Enter Mark : ");
   scanf("%d",&mark);

   if(mark>100 || mark<0){
      printf("Invalid MARK\n");

   }else if(mark>=80 && mark<=100){
       printf("A+\n");
   }else if(mark>=60 && mark<=79){
       printf("A\n");
   }else if(mark>=50 && mark<=59){
       printf("A-\n");
   }else if(mark>=33 && mark<=49){
       printf("PASS\n");
   }else{
    printf("Fail\n");
   };
}
    getch();
}
