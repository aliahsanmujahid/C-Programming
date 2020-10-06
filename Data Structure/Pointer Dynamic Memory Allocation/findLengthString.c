

#include<stdio.h>
int main(){
int i,c=0;
char str[10],*p;
printf("Enter A String: ");
gets(str);
p=str;
while(*p!='\0'){
    c++;
    p++;
}
printf("Length= %d",c);

getch();
}





