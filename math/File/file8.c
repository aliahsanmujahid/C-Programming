#include<stdio.h>
int main(){

FILE *File;
char name[20];
int age,phoneNumber,num,i;

File = fopen("Student.txt","a");


if(File==NULL){
    printf("File Not Exists");
}else{
  printf("File Open\n");
  printf("Enter Number Of Student: ");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
        printf("Enter %d Number Student Name: \n",i);
        printf("Enter Student Name: ");
        fflush(stdin);
        gets(name);
        printf("Enter Student Age: ");
        fflush(stdin);
        scanf("%d",&age);
        printf("Enter Student Phone Number: ");
        fflush(stdin);
        scanf("%d",&phoneNumber);

        fprintf(File,"\n%s\t\t%d\t%d\n",name,age,phoneNumber);



      }

  printf("File Taken");
  fclose(File);
}

getch();

}
