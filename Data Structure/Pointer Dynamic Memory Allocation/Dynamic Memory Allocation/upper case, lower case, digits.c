

#include<stdio.h>
#include<stdlib.h>

int main(){
int n,c1=0,c2=0,c3=0,c4=0,i;
char *p;
printf("Enter Size of String: ");
scanf("%d",&n);
p=(char*)malloc(n*sizeof(char));
printf("Enter a String: ");
fflush(stdin);
gets(p);
i=0;
while(*(p+i)!='\0'){
     if(*(p+i)>=65&&*(p+i)<=90)
     c1++;
     else
        if(*(p+i)>=97&&*(p+i)<=122)
            c2++;
        else
        if(*(p+i)>=48&&*(p+i)<=57)
        c3++;
     else
        c4++;

     i++;
}
printf("Upper Case %d\n",c1);
printf("Lower Case %d\n",c2);
printf("Digits %d\n",c3);
printf("Special Symbols %d\n",c4);
free(p);
return 0;
}



