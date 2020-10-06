
#include<stdio.h>
void print(char*);
int main(){
char s1[10];
printf("Enter String: ");
gets(s1);
print(s1);
getch();
}
void print(char *p1){
    printf("ASCII Value ");
   while(*p1!='\0'){

    printf("%c = %d ",*p1,*p1);
        p1++;
   }

   }

















