
#include<stdio.h>
int maximum(int *);
int minimum(int *);
int main(){
int a[10]={-1,2,3,-4,5,6,7,8,9,15};
int max,min;
max=maximum(a);
printf("Maximum = %d\n",max);
min=minimum(a);
printf("Minimum = %d",min);
getch();
}
int maximum(int *p){
   int i,max=-0;
   for(i=0;i<10;i++){
    if(*p>max){
      max= *p;
    }
      p++;
   }
   return max;
   }

int minimum(int *p){
   int i,min=32768;
   for(i=0;i<10;i++){
    if(*p<min)
      min= *p;
      p++;
   }
  return min;
   }












