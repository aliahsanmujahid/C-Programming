#include<stdio.h>
int main(){

int a[10] = {1,2,3,4,5,6,7,8,9,10},*p,i;
printf("Enter 10 Number: ");


p=a;

for(i=0;i<10;i++){
   printf("%d ",*p);
   p++;
}

getch();

}


