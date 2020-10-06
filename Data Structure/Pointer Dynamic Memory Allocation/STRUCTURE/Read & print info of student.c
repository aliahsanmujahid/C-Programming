#include<stdio.h>

struct student{
int rno;
char name[20];
float marks;

};
void display(struct student);
int main(){
struct student s;
printf("Enter Roll Number: ");
scanf("%d",&s.rno);
printf("Enter Name: ");
fflush(stdin);
gets(s.name);
printf("Enter Marks: ");
scanf("%f",&s.marks);
display(s);

getch();
}


void display(struct student s){
    printf("Roll Number: %d\n",s.rno);
    printf("Name: %s\n",s.name);
    printf("Marks: %f\n",s.marks);

}
