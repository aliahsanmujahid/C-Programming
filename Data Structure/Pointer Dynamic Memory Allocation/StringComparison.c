
#include<stdio.h>
int main(){
char s1[10],s2[10],*p1,*p2;
int f=0;
printf("Enter 1st String: ");
gets(s1);
printf("Enter 2nd String: ");
gets(s2);
p1=s1;
p2=s2;
while(*p1!='\0' || *p2!='\0'){
   if(*p1 != *p2){
    f=1;
    break;
   }
p1++;
p2++;
}
if(f==0)
    printf("String are Equal");
else
    printf("String are Not Equal");
getch();
}







