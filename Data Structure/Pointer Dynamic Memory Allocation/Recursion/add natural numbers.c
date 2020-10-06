#include <stdio.h>
#include <stdlib.h>
int sum(int);
void main()
{
    int n,s;
    printf("Enter A Number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum Is: %d",s);
};
int sum(int n){
if(n==1)
return 1;
else
    return n+sum(n-1);
}

