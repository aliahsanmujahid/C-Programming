#include<stdio.h>

struct myStruct{

char name[50];
int age;
double height;
};

int main(){

struct myStruct s1;
struct myStruct s2;

s1.age = 20;
s2.age = 30;

//s1.name  = "Dipto";
strcpy(s1.name,"Dipto");

printf("%s\n",s1.name);
printf("%d",s1.age);

return 0;

}







