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
if(n==0)
return 0;
else
    return n+sum(n-2);
}


