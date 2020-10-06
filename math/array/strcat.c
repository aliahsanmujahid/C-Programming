#include <stdio.h>
int main() {

char s1[50]="My Name is";
char s2[50]=" Mujahid";

int i=0,len=0,j=0;

while(s1[i]!='\0'){
    i++;
    len++;
}
while(s2[j]!='\0'){

    s1[len+j]=s2[j];
    j++;
}
printf("Str1 = %s\n",s1);
getch();
}
