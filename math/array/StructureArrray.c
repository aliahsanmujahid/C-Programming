#include<stdio.h>
struct person{
char name[30];
int age;
float sallery;

};

int main(){

struct person person1[4];

for(int i=0;i<2;i++){

    printf("Enter Information For Person %d\n",i+1);
    fflush(stdin);
    printf("Enter Name: ");
    gets(person1[i].name);
    fflush(stdin);
    printf("Enter Age: ");
    fflush(stdin);
    scanf("%d",&person1[i].age);
    fflush(stdin);
    printf("Enter Salary: ");
    scanf("%f",&person1[i].sallery);

}
printf("\n");
for(int i=0;i<2;i++){

    printf("Information For Person %d\n",i+1);
    printf("Name: %s\n",person1[i].name);
    printf("Age: %d\n",person1[i].age);
    printf("Salary: %f\n",person1[i].sallery);


}
getch();

}
