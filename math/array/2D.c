#include <stdio.h>
int main() {
int A[3],i,sum=0;

for(i=0;i<3;i++){

    printf("Array A[%d] : ",i);
    scanf("%d",&A[i]);

printf("\n");
}
for(i=0;i<3;i++){

  sum=sum+A[i];

}
printf("Sum= %d",sum);
getch();
}
