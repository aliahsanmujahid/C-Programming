

#include<stdio.h>
int main(){
int i,c=0,c2=0;
char str[10],*p;
printf("Enter A String: ");
gets(str);
p=str;
while(*p!='\0'){
   if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
    c++;
   else
    c2++;
   p++;
}
printf("Vowel= %d;Consonant = %d",c,c2);

getch();
}






