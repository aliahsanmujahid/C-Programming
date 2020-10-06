
#include<stdio.h>
int main(){

int a[10]={2,3,4,4,5,6,7,8,9,10},n,*p,i,t=0;
printf("Enter Search Number: ");
scanf("%d",&n);

p=a;

for(i=0;i<9;i++){

    if(*p==n){
        printf("Position %d\n", i+1);
        t++;
    }
    p++;
}
if(t==0){
    printf("Not Found");
}else{
    printf("%d Time",t);
}

getch();

}




