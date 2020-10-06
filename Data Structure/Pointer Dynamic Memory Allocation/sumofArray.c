
#include<stdio.h>
int sum(int *);
int main(){
int a[10]={1,1,1,1,1,1,1,1,1,1},s;
s=sum(a);
printf("Sum = %d",s);
getch();
}
int sum(int *a){
   int i,s=0;
   for(i=0;i<10;i++){
      s=s+*a;
      a++;
   }
   return s;
}








