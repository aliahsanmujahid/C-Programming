#include<stdio.h>
#include<stdlib.h>

int main(){
int *p,n,i,s1=0,s2=0;
printf("Enter Size of Array: ");
scanf("%d",&n);
p=calloc(n,sizeof(int));
printf("Enter %d Elements...",n);
for(i=0;i<n;i++){
     scanf("%d",(p+i));
     if(*(p+i)%2==0)
        s1=s1+*(p+i);

     else
        s2=s2+*(p+i);

}
printf("Even %d Odd %d",s1,s2);
free(p);
return 0;
}

