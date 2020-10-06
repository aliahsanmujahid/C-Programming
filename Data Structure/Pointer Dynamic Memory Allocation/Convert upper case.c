
#include<stdio.h>
void convert(char*);
int main(){
char s1[10];
printf("Enter String: ");
gets(s1);
convert(s1);
printf("Convert String: %s",s1);
getch();
}
void convert(char *p){
   while(*p!='\0'){
    if(*p>=65&&*p<=90)
        *p = *p +32;
    else
       if(*p>=97&&*p<=122)
        *p = *p -32;
    p++;
   }
   }


















