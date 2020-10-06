
#include<stdio.h>
int count(int *);
int main(){
int a[10]={3,4,5,6,0,0,-1,-2,-3,-3};
count(a);

getch();
}
int count(int *p){
   int i,c1=0,c2=0,c3=0;
   for(i=0;i<10;i++){
    if(*p>0)
        c1++;
    else
        if(*p<0)
        c2++;
    else
        c3++;
             p++;
   }
       printf("Positive = %d; Negative = %d; Zero = %d",c1,c2,c3);
   }













