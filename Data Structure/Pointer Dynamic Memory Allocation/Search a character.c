
#include<stdio.h>
int search(char*,char);
int main(){
char s1[10],ch;
int f;
printf("Enter String: ");
gets(s1);
printf("Enter Search: ");
scanf("%c",&ch);
f=search(s1,ch);
if(f==1){
    printf("Char Found\n");
}else
 printf("Not Found\n");
getch();
}
int search(char *p,char ch){
    int f=0;
   while(*p!='\0'){
    if(*p==ch){
        f=1;
        break;
    }
    p++;
   }
   return f;
   }



















