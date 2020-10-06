#include<stdio.h>

int main(){

FILE *File;
char name[20] = "Ali Ahsan Mujahid";
int length = strlen(name);
int i;

File = fopen("test.txt","w");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open");

  for(i=0;i<length;i++){

    fputc(name[i],File);
  }

  fclose(File);
}

getch();

}
