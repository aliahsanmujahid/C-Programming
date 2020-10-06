
#include<stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10},b[10],*p1,*p2,i;
printf("Enter 10 Element: ");
//for(i=0;i<10;i++)
//    scanf("%d",&a[i]);
p1=a;
p2=b;

for(i=0;i<10;i++){
    *p2 = *p1;
    p1++;
    p2++;
}
printf("Second Array Contains\n");
for(i=0;i<10;i++){
   printf("%d ",b[i]);
}
getch();

}




