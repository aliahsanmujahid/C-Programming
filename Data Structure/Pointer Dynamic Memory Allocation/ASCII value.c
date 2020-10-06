
#include<stdio.h>
int main(){
char str[10],*p1;
printf("Enter 1st String: ");
gets(str);
p1=str;
while(*p1!='\0'){
printf("\n%d",*p1);
p1++;

}

getch();
}








