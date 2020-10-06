
#include <stdio.h>
struct rect{
int length;
int breath;
};

void initi(struct rect *r,int l,int b){

r->length = l;
r->breath = b;

}
int area(struct rect r){
return r.length*r.breath;
}
void change(struct rect *r,int l){
r->length = l;
}
int main()
{
struct rect r;
initi(&r,10,5);
area(r);
change(&r,20);

getch();

}

