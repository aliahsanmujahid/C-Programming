#include<stdio.h>
int sum(int *);
int main(){
int a[10]={3,4,5,6};
reverse(a);
getch();
}
int reverse(int *a){
   int i;
   for(i=3;i>=0;i--){
      printf("%d ",*(a+i));
   }

}










