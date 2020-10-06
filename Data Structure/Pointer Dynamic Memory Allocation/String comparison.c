#include<stdio.h>
int compare(char*,char*);
int main(){
char s1[10],s2[10];
int f;
printf("Enter String1: ");
gets(s1);
printf("Enter String2: ");
gets(s2);
f=compare(s1,s2);
if(f==0)
printf("String are Equal");
else
printf("String are Not Equal");
getch();
}
int compare(char *p1,char  *p2){
    int f=0;
   while(*p1!='\0'||*p2!='\0'){
   if(*p1!=*p2){
        f=1;
        break;
   }
    p1++;
    p2++;
   }
return f;
   }

















