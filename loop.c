#include<stdio.h>
int main(){

int num,i;
printf("Enter First Number: ");
scanf("%d",&num);

for(i=num;i<=num;i++){
for(i=1;i<=10;i++){
   printf("%dX%d=%d\n",num,i,num*i);
}

}

return 0;
}
