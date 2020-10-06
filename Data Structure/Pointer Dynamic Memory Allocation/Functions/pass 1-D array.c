#include<stdio.h>
int sum(int[]);
int main(){
int a[10],i,s;
printf("\nEnter Elements: ");
for(i=0;i<10;i++)
    scanf("%d",&a[i]);

s=sum(a);
printf("\nSum = %d",s);
getch();
}
int sum(int a[]){

int s=0,i;
for(i=0;i<10;i++){
    s=s+a[i];
}
return s;
}




