
#include<stdio.h>
int main(){

int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={4,4,4,4,4,4,4,4,4,4};
int *p1,*p2,i;
p1=a;
p2=b;

for(i=0;i<10;i++){
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    p1++;
    p2++;
}
for(i=0;i<10;i++){
printf("%d %d\n",a[i],b[i]);
}

getch();
}





