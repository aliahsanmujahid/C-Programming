#include<stdio.h>
void reverse(char *);
int main(){
char str[10];
printf("Enter String: ");
gets(str);
reverse(str);
getch();
}
void reverse(char *p){
    int i,c=0;
for(i=0;*(p+i)!='\0';i++){
c++;
}
for(i=c-1;i>=0;i--){
printf("%c",*(p+i));
}

   }














