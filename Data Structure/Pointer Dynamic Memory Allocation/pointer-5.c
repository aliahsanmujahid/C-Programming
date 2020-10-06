#include<stdio.h>
#include<stdlib.h>

void swapping(int *ptr1,int *ptr2){
int temp;
temp = *ptr1;
*ptr1 = *ptr2;
*ptr2  = temp;

}

int main(){


int x=10,y=20;
printf("BEFORE SWAPPING. X = %d;Y=%d\n",x,y);
swapping(&x,&y);
printf("AFTER SWAPPING. X = %d;Y=%d",x,y);

getch();
}
