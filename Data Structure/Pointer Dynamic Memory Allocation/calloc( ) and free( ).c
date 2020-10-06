#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Enter Elements...");
for(i=0;i<n;i++){
    scanf("%d",(p+i));
}
printf("\nElements are...");
for(i=0;i<n;i++){
    printf("\n%d",*(p+i));
}
free(p);
return 0;
}
