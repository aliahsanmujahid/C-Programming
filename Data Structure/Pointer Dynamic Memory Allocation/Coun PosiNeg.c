
#include<stdio.h>
int main(){

int a[10] = {1,2,3,4,5,6,7,8,9,10},*p,s1=0,s2=0,s3=0,i;
p=a;
for(i=0;i<10;i++){
    if(*p>0)
        s1++;
    else
        if(*p<0)
        s2++;
    else
        s3++;
        p++;
}
printf("Positive=%d Negative=%d Zero=%d",s1,s2,s3);

getch();
}




