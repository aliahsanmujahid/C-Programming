
#include<stdio.h>
#include<stdlib.h>

int main(){
int *p1,*p2,i,n1,n2;
printf("Enter Size of Array: ");
scanf("%d",&n1);
p1=(int*)malloc(n1*sizeof(int));
printf("Enter %d Elements...",n1);
for(i=0;i<n1;i++)
     scanf("%d",(p1+i));


printf("Enter Size of Array: ");
scanf("%d",&n2);
p2=(int*)malloc(n2*sizeof(int));
printf("Enter %d Elements...",n2);
for(i=0;i<n2;i++)
     scanf("%d",(p2+i));



if(n1==n2){

  for(i=0;i<n1;i++){
    printf("\n %d",*(p1+i)+*(p2+i));
  }
}else
  printf("Size of Array is Different...");

free(p1);
free(p2);
return 0;
}

