#include<stdio.h>
struct person{
int age;
float sallery;

};

int main(){

struct person person1={27,33333333333};

struct person person2,person3;

person2.age=27;
person2.sallery=222222222222;

person3=person2;
printf("Age = %d\n",person1.age);
printf("Salary = %f\n",person1.sallery);


printf("Age = %d\n",person2.age);
printf("Salary = %f\n",person2.sallery);

printf("Age = %d\n",person3.age);
printf("Salary = %f\n",person3.sallery);

getch();

}
