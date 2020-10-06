#include<stdio.h>
int length(char *);
int main(){
char str[10]="sadfsd";
int l;
//printf("Enter Char: ");
//gets(str);
l=length(str);
printf("Length : %d",l);
}
int length(char *p){
    int l=0;
while(*p!='\0'){
     l++;
     p++;
}
return l;
   }












