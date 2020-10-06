
#include<stdio.h>
#include<stdlib.h>
struct book{
int bno;
char name[10];
float price;
};
void display(struct book *p);
int main(){
struct book b;
printf("\nEnter Book No: ");
scanf("%d",&b.bno);
printf("\nEnter Name: ");
fflush(stdin);
gets(b.name);
printf("\nEnter Price: ");
scanf("%f",&b.price);
display(&b);
getch();
}
void display(struct book *p){
printf("\nEnter No: %d",p->bno);
printf("\nEnter Name: %s",p->name);
printf("\nEnter No: %f",p->price);
}




