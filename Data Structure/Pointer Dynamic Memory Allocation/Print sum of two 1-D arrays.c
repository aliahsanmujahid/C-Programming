

#include<stdio.h>
void sum(int *,int *);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={1,2,3,4,5,6,7,8,9,10};
int i;
sum (a,b);
getch();
}
void sum(int *p1,int *p2){
   int i;
   printf("Addition ");
   for(i=0;i<10;i++){
     printf("%d ",*p1+*p2);
     p1++;
     p2++;
   }
   }











