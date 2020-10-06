#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,max=-32767,min=32767;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=malloc(n*sizeof(int));
printf("Enter %d Elements...",n);
for(i=0;i<n;i++){
     scanf("%d",(p+i));
     if(*(p+i)>max)
        max = *(p+i);
     if(*(p+i)<min)
         min = *(p+i);

}
printf("\nMAX %d MIN %d",max,min);
free(p);
return 0;
}

