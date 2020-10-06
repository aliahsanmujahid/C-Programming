#include <stdio.h>
int main()
{
while(1){
   int num,i;
   printf("Enter Number : ");
   scanf("%d",&num);
   i=1;
   while(i<=10){

     printf("%d X %d = %d\n",num,i,num*i);

     i++;
   }

}
    getch();
}
