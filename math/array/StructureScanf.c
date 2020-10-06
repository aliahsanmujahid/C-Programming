#include<stdio.h>
struct person{
int age;
float sallery;

};

int main(){
struct person person1;

printf("Enter Age: ");
scanf("%d",&person1.age);
printf("Enter Salary: ");
scanf("%f",&person1.sallery);

printf("Age = %d\n",person1.age);
printf("Salary = %f\n",person1.sallery);

getch();

}
