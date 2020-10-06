
#include<stdio.h>
#include<stdlib.h>
struct height{
int feet,inch;
};
int main(){
struct height h1,h2,h3,*p1,*p2,*p3;
printf("\nEnter First height: ");
scanf("%d%d",&h1.feet,&h1.inch);
printf("\nEnter Second Height: ");
scanf("%d%d",&h2.feet,&h2.inch);
p1=&h1;
p2=&h2;
p3=&h3;
p3->feet=p1->feet+p2->feet;
p3->inch=p1->inch+p2->inch;
if(h3.inch>=12){
h3.feet++;
h3.inch=h3.inch-12;
}
printf("\nFeet = %d\nInch = %d",h3.feet,h3.inch);
getch();

}





