#include<stdio.h>
int sum(int *);
int main(){
int a[10]={1,2,1,2,1,2,1,1,1,1},s;
sum(a);
getch();
}
int sum(int *a){
   int i,s1=0,s2=0;
   for(i=0;i<10;i++){
      if(*a%2==0)
        s1=s1+*a;
      else
        s2=s2+*a;
      a++;
   }
   printf("Sum Even=%d , Odd=%d ",s1,s2);

}








