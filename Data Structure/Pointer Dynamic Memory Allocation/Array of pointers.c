#include<stdio.h>
int main(){

int a=5,b=6,c=7;
int i,*p[3];
p[0]=&a;
p[1]=&b;
p[2]=&c;
for(i=0;i<3;i++)
    printf("\t%d ",*(p[i]));
getch();

}


