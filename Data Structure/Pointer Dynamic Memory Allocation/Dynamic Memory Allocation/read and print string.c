
#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
char *p;
printf("Enter Size of String: ");
scanf("%d",&n);
p=(char*)calloc(n,sizeof(char));
printf("Enter a String: ");
fflush(stdin);
gets(p);
printf("You Entered: %s",p);
printf("\nYou Entered: %d",*p);
free(p);
printf("\nYou Entered: %d",*p);
return 0;
}


