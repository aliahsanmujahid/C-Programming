#include<stdio.h>
struct person{
int age;
float sallery;

};
struct person person1,person2;
int main(){
/*Local Structure
struct person{
int age;
float sallery;

};
struct person person1,person2;*/

person1.age = 27;
person1.sallery = 700000;

printf("Age = %d\n",person1.age);
printf("Salary = %f\n",person1.sallery);

getch();

}
