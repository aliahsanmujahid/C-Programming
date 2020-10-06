#include <stdio.h>
int main() {

int num[]={10,20,30,40,50};
int value,i,pos=0;
printf("Enter The Value You Want To Search: ");
scanf("%d",&value);

for(i=0;i<=5;i++){

    if(value==num[i]){
       pos=i+1;
       break;
    }
}
if(pos==0){
  printf("Item is Not Found");
}else{
printf("%d Is Found at %d Position",value,pos);
}
getch();
}
