#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,f=0,item;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=malloc(n*sizeof(int));
printf("Enter %d Elements...",n);
for(i=0;i<n;i++){
     scanf("%d",(p+i));

}
printf("Enter The Number You Want To Search");
scanf("%d",&item);
for(i=0;i<n;i++){
    if(*(p+i)==item){
         printf("Item Found at %d Position\n",i+1);
         f++;
    }
}
if(f==0)
    printf("Item Not Found\n");
else
    printf("Item Found %d Time",f);
free(p);
return 0;
}

