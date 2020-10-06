

#include<stdio.h>
#include<stdlib.h>

int main(){
int n1,n2,i;
char *p1,*p2;
printf("Enter Size of First String: ");
scanf("%d",&n1);
p1=(char*)malloc(n1*sizeof(char));
printf("\nEnter Size of Second String: ");
scanf("%d",&n2);
p2=(char*)malloc(n2*sizeof(char));
printf("\nEnter a String: ");
fflush(stdin);
gets(p1);
i=0;
while(*(p1+i)!='\0'){
*(p2+i)= *(p1+i);

     i++;
}
*(p2+i)= '\0';

printf("\nCopied String %s\n",p2);

free(p1);
free(p2);
return 0;
}


