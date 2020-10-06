
#include<stdio.h>
int search(int *,int);
int main(){
int a[10]={3,4,5,6},n,f;
printf("Enter Search Number: ");
scanf("%d",&n);
f=search(a,n);
if(f==1)
    printf("Number Is Found");
else
        printf("Number Is Not Found");
getch();
}
int search(int *a,int n){
   int i,f=0;
   for(i=0;i<40;i++){
     if(*a==n){
        f=1;
        break;
     }
     a++;
   }
   return f;
}










