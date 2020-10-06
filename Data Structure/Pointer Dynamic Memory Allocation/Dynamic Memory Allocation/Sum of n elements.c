#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,s=0;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));//malloc(n*sizeof(int));
printf("Enter Elements...");
for(i=0;i<n;i++){
     scanf("%d",(p+i));
     s=s+*(p+i);
}
printf("Sum is %d",s);
free(p);
return 0;
}
