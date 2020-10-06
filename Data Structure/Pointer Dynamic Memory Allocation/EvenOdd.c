#include<stdio.h>
int main(){

int a[10] = {1,2,3,4,5,6,7,8,9,10},*p,s1=0,s2=0,i;
p=a;
for(i=0;i<10;i++){
    if(*p%2==0)
        s1=s1+*p;
    else
        s2=s2+*p;
        p++;
}
printf("Even = %d\n",s1);
printf("Odd = %d",s2);
getch();
}




