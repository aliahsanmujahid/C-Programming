
#include<stdio.h>
int count(char*,char);
int main(){
char s1[10],ch;
int f;
printf("Enter String: ");
gets(s1);
printf("Enter Count: ");
scanf("%c",&ch);
f=count(s1,ch);
printf("Count = %d\n",f);
getch();
}
int count(char *p,char ch){
    int f=0;
   while(*p!='\0'){
    if(*p==ch){
       f++;
    }
    p++;
   }
   return f;
   }




















