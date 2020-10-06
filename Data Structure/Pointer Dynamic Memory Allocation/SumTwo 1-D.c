
#include<stdio.h>
int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int b[10] = {1,2,3,4,5,6,7,8,9,10};
int c[10],*p1,*p2,*p3,i,sum=0;
p1=a;
p2=b;
p3=c;
for(i=0;i<10;i++){

    *p3=*p1+*p2;
    p1++;
    p2++;
    p3++;
}

for(i=0;i<10;i++){
    sum=sum+ c[i] ;
    printf("%d ",c[i]);
}
printf("\nSum = %d",sum);
getch();

}



