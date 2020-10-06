#include<stdio.h>

int main(){

FILE *File;
char name[100];
int i;

File = fopen("test.txt","w");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");
  printf("Enter your Full Name: ");
  gets(name);

    fputs(name,File);


   fclose(File);
}

getch();

}
