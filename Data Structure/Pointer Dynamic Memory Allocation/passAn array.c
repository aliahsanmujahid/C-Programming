
#include<stdio.h>
void print(int *);
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
print(a);
getch();
}
void print(int *a){
   int i;
   for(i=0;i<10;i++){
      printf("%d ",*a);
      a++;
   }
}








