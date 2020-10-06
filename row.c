#include<stdio.h>
int main(){

int row,col,n;
printf("Enter Number: ");
scanf("%d",&n);

for(row=1;row<=n;row++){
for(col=1;col<=row;col++){
      if(col%2==0){
        printf("@");
    }else{
    printf("#");
    }
}
printf("\n");
}

return 0;
}
