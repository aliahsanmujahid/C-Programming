#include<stdio.h>
void count(char *);
int main(){
char str[10];
int l;
printf("Enter String: ");
gets(str);
count(str);
}
void count(char *p){
    int c1=0,c2=0;
while(*p!='\0'){
     if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            c1++;
     else
        c2++;
     p++;
}
printf("Vowel = %d,Consonent = %d",c1,c2);

   }













