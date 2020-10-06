#include<stdio.h>
int fact(int);
void main(){
int n,f;
printf("\nEnter a Value: ");
scanf("%d",&n);
f = fact (n);
printf("\nResult: %d",f);
getch();
}
int fact(int n){
int i,f=1;
for(i=1;i<=n;i++)
    f = f*i;

return f;

}


