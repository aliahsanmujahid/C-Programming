#include<stdio.h>

struct mystruct{
 int age;
 double height;

};
int main(){
struct mystruct s1;
s1.age = 10;s1.height = 4.7;
struct mystruct *ps1;
ps1=&s1;
//(*ps1).age=21;
ps1->age=21;
//(*ps1).height=5.1;
ps1->height=5.1;
printf("%d\n",s1.age);
printf("%f\n",s1.height);

return 0;
}
