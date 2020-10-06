#include<stdio.h>

int main(){

system("Color 37");
int n,i,pos=0;

int a[] = {10,20,30,40};


printf("Enter Number To Search: ");
scanf("%d",&n);

for(i=0;i<4;i++){

    if(a[i]==n){
        pos=1;
        break;
    }

}


if(pos==1){
printf("\n\n%d Found At %d Position.",n,i+1);
}else{
printf("\n\nNot Found");
}








getch();
}
