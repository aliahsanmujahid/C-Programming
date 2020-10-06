#include<stdio.h>

int main(){

int num;

printf("Enter time: ");
scanf("%d",&num);

if(num>=0&&num<=24){

if(num>=4){
  printf("He is a Game Addiction\n");
}
if(num>=3){
  printf("He is a in this path\n");
}
if(num>2){
  printf("He is a game lover\n");
}
if(num<2){
  printf("He is like this game\n");
}
}else{
printf("Enter a Valid Time");
}
getch();
}
