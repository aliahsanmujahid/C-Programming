#include<stdio.h>
#include <stdlib.h>
int main(){

FILE *File;
char name[100];
int age;

File = fopen("test.txt","w");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");
  printf("Enter your Full Name: ");
  gets(name);
  printf("Enter your Age: ");
  scanf("%d",&age);
  fprintf(File,"Name = %s\nAge = %d\n",name,age);
  printf("File Written Successfully");
   fclose(File);
}

getch();

}
