
#include<stdio.h>
#include<stdlib.h>

int main(){
int n,c=0;
char *p;
printf("Enter Size of String: ");
scanf("%d",&n);
p=(char*)malloc(n*sizeof(char));
printf("Enter a String: ");
fflush(stdin);
gets(p);
int i=0;
while(*(p+i)!='\0'){
    c++;
    i++;
}
free(p);
printf("\nTotal: %d",c);
return 0;
}


