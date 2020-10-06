#include<stdio.h>
int sum(int[3][3]);
int main(){
int a[3][3],i,j,s;
printf("\nEnter Value: ");
for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
s=sum(a);
printf("\nSum = %d",s);
getch();
}
int sum(int a[3][3]){

int i,j,s=0;
for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   if(i==j)
    s=s+a[i][j];
return s;
}





