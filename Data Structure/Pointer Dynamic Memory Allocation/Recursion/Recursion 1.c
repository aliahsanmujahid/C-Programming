#include <stdio.h>
#include <stdlib.h>
int fact(int);
void main()
{
    int n,f;
    printf("Enter A Number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial Is: %d",f);
};
int fact(int n){
if(n==0)
return 1;
else
    return n*fact(n-1);
}
