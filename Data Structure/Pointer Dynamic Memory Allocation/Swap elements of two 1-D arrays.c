

#include<stdio.h>
void swap(int *,int *);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={4,4,4,4,5,6,7,8,9,10};
int i;
swap (a,b);
printf("Swapping Value");
for(i=0;i<10;i++){
    printf("%d %d\n",a[i],b[i]);
}
getch();
}
void swap(int *p1,int *p2){
   int i;
   for(i=0;i<10;i++){
     *p1 = *p1+*p2;
     *p2 = *p1-*p2;
     *p1 = *p1-*p2;
     p1++;
     p2++;
   }
   }












