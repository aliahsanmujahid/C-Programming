#include<stdio.h>

struct person{
char name[30];
int age;
float sallery;

};

void display (struct person p){

printf("Name : %s\n",p.name);
printf("Name : %d\n",p.age);
printf("Name : %f\n",p.sallery);

}
int main(){

struct person person1;

strcpy(person1.name,"Anis Islam");
person1.age = 23;
person1.sallery = 22222222222;

display(person1);

getch();

}
