#include<stdio.h>
int main(){

FILE *File;
char ch;

File = fopen("test.txt","r");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");
  while(!feof(File)){

  ch = fgetc(File);
  printf("%c",ch);
  }
  fclose(File);
}

getch();

}
