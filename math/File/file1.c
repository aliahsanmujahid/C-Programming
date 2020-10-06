#include<stdio.h>
#include <stdlib.h>
int main(){

FILE *File;

File = fopen("test.txt","a");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");

  fclose(File);
}

getch();

}
