#include<stdio.h>
int main(){

int row,col,n;
printf("Enter N: ");
scanf("%d",&n);

for(row=1;row<=n;row++){

for(col=1;col<=row;col++){

if(row==1||row==n||col==1||col==row){
printf("*");
}else{
printf(" ");
}
}
printf("\n");
}

}