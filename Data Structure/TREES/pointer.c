#include<stdio.h>
struct hey
{
int a;
int sum(int w,int z);
{
return w+z;
}
int(*ad)(int ,int);

}x;

struct bro
{
struct hey * man;
};
int v(int r,int s)
{
return r*s;
}
int main()
{

struct bro y;
y.man=&x;
x.ad=v;
printf("%X\t",x.ad(2887,18));
y.man->a=100;
printf("%c\t",y.man->a);
printf("%o",y.man->sum(22,6));


}
