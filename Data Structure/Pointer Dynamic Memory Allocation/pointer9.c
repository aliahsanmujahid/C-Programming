#include<stdio.h>

int main(){
   //int a[x] = {4,8,9};
   int x;
   //printf("Enter The Size OF Array: ");
   //scanf("%d",&x);
   int *ar2 = (int*)malloc(x*sizeof(int));
   *ar2 = 4;
   //*(ar2+1)=8;
   ar2[1]=8;
   ar2[2]=9;

   printf("%d",ar2[2]);
return 0;
}
