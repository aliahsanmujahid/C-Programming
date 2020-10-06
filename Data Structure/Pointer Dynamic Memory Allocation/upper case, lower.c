#include<stdio.h>
int main(){
int c1=0,c2=0,c3=0,c4=0;
char str[10],*p,ch;
printf("Enter A String: ");
gets(str);
p=str;
while(*p!='\0'){
   if(*p>=65&&*p<=90)
    c1++;
   else
    if(*p>=97&&*p<=122)
   c2++;
   else
    if(*p>=48&&*p<=57)
   c3++;
   else
    c4++;

p++;
}
ch=c1+c2;
printf("Case = %d\n",ch);
printf("UpperCase = %d\n",c1);
printf("LowerCase = %d\n",c2);
printf("Digits = %d\n",c3);
printf("Special Symbols = %d\n",c4);

getch();
}






