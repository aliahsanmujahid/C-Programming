#include<stdio.h>
int main(){

int g;
char c;
printf("y=yes;n=no : ");
scanf("%c ",&c);
while(c=='y'){

    printf("Enter Grade point : ");
    scanf("%d ",&g);

    if(g>2.0)
    printf("PASS\n");


}
getch();
}
