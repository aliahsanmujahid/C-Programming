#include<stdio.h>
int main(){

int a[10],*p,i,s=0;//a[10] = {1,2,3,4,5,6,7,8,9,10}
printf("Enter 10 Number: ");

for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}

p=&a[0];
for(i=0;i<10;i++){
   s=s+(*p);
   p++;
}
printf("Sum = %d\n",s);

getch();

}


