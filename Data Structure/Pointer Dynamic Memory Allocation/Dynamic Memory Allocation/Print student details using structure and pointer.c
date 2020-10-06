


#include<stdio.h>
#include<stdlib.h>
struct student{
int rno;
char name[10];
float marks;
};
int main(){
struct student s,*p;
printf("\nEnter Roll Number: ");
scanf("%d",&s.rno);
printf("\nEnter Name: ");
fflush(stdin);
gets(s.name);
printf("\nEnter Marks: ");
fflush(stdin);
scanf("%f",&s.marks);
p=&s;
printf("\nStudent Details...");
printf("\nRoll No=%d",p->rno);
printf("\nName =%s",p->name);
printf("\nMarks =%f",p->marks);

getch();

}




