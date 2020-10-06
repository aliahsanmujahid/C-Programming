#include<stdio.h>
int main(){

int a[] = {1,6,3,4,5};
int *p,i;
p=&a[0];
for(i=0;i<5;i++){
    printf("%d ",*p);
    //printf("\n%d, %d, %d, %d",i,a[i],*p,p);
    p++;
}

getch();

}


