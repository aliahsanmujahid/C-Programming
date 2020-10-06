#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,newsize;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));//malloc(n*sizeof(int));
printf("\nElements are...");
for(i=0;i<n;i++){
    printf("\n%d",*(p+i));
}
printf("\nEnter New Size: ");
scanf("%d",&newsize);
p=realloc(p,newsize);
printf("\nElements are...");
for(i=0;i<newsize;i++){
    printf("\n%d",*(p+i));
}
return 0;
}
