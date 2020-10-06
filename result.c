#include <stdio.h>
int main()
{
while(1){
   float mark;
   printf("Enter Mark : ");
   scanf("%f",&mark);
if(mark<0 || mark>100){
    printf("Invalid Mark\n");
}
 else if(mark>=80){
       printf("A+\n");
   }else if(mark>=60){
       printf("A\n");
   }else if(mark>=50 ){
       printf("A-\n");
   }else if(mark>=33 ){
       printf("PASS\n");
   }else{
    printf("Fail\n");
   };
}
    getch();
}
