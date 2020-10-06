#include<stdio.h>
int main(){

FILE *File;
char ch[40];

File = fopen("test.txt","r");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");
  while(!feof(File)){

  fgets(ch,39,File);
  printf("%s",ch);
  }

  fclose(File);
}

getch();

}
