#include<stdio.h>
int main(){
char s1[10],s2[10],*p1,*p2;
printf("Enter 1st String: ");
gets(s1);
printf("Enter 2nd String: ");
gets(s2);
p1=s1;
while(*p1!='\0'){
p1++;
}
p2=s2;
while(*p2!='\0'){
   *p1=*p2;
p1++;
p2++;
}
printf("Concatenated String is = %s\n",s1);

getch();
}







