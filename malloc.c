#include<stdio.h>

struct mystruct{
 int age;
 double height;

};
int main(){
    struct mystruct *ps;
    ps=(struct mystruct*)malloc(sizeof(struct mystruct));

    ps->age = 20;
    ps->height = 30;
    printf("%d\n",ps->age);
    printf("%f",ps->height);
return 0;
}
