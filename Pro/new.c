#include<stdio.h>
int main(){
int i,vowel=0,c=0,v=0;
char s[30],upper;
printf("Enter Any String: ");
gets(s);
printf("Entered %s\n",s);

i=0;
while(s[i]!='\0'){

        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
         v++;
        }
        printf(" %c",s[i]);
        c++;
  i++;
}
printf("\nTotal %d",c);
printf("\nVowel %d",v);
getch();
}
