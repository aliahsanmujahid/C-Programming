/*#include <stdio.h>
struct rectangle{
int area;
int length;

};

int area(struct rectangle *p,int l){
   p->length = l;
}
int main()
{
struct rectangle r={10,5};
area(&r,20);
printf("%d",r.length);
getch();
}*/

#include <stdio.h>
struct test{
int a[3];
int n;

};

void fun(struct test t1){


}
int main()
{
struct test t={{10,5,4},4};
fun(t);
printf("%d",r.length);
getch();

