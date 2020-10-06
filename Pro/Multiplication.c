#include <stdio.h>
int main()
{
    while(1){
    int i,n;
    printf("Enter A Number: ");
    scanf("%d",&n);
i=1;
while(i<=10){

     printf("%d * %d = %d\n",n,i,n*i);
     i++;
}
    getch();
}
}
