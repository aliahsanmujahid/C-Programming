#include<stdio.h>
int main(){

FILE *File;
char name[20];
char name2[20];
int age;

File = fopen("test.txt","r");


if(File==NULL){
    printf("File Not Exists");
}else{

  printf("File Open\n");
  fscanf(File,"%s %s %d",&name,&name2,&age);
  printf("%s %s %d\n",name,name2,age);

  fclose(File);
}

getch();

}
