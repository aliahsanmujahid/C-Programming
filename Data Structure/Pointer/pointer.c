#include<stdio.h>
int main(){

void change(int *px){
  *px=20;
  printf("\n%d",*px);
}
int x;
x=10;
change(&x);
printf("\n%d",x);

getch();
return 0;
}
