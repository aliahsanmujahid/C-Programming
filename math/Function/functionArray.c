#include<stdio.h>

void display(int num[]){

for(int i=0;i<4;i++){

    printf("%d ",num[i]);
}

}

int main(){

int num[] = {10,20,30,40};

display(num);

getch();

}
