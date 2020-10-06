#include<stdio.h>
void concat(char *,char *);
int main(){
char s1[10],s2[10];
printf("Enter String1: ");
gets(s1);
printf("Enter String2: ");
gets(s2);
concat(s1,s2);
printf("String is = %s",s1);
getch();
}
void concat(char *p1,char  *p2){
   while(*p1!='\0'){
    p1++;
   }
   while(*p2!='\0'){
        *p1=*p2;
    p1++;
    p2++;
   }

   }















