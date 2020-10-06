#include<stdio.h>
void swap(int,int);
int main(){
int a,b;
printf("\nEnter Two Numbers: ");
scanf("%d%d",&a,&b);
printf("\nBefore Swap %d %d",a,b);
swap(a,b);
getch();
}
void swap(int p,int q){
int r;
r=p;
p=q;
q=r;
printf("\nAfter Swap %d %d",p,q);


}

