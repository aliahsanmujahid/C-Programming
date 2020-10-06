

#include<stdio.h>
void print(char *);
int main(){
char str[10];
printf("Enter Char: ");
gets(str);
print(str);
}
void print(char *p){
while(*p!='\0'){
     printf("%c",*p);
     p++;
}
   }













