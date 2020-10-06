#include<stdio.h>
int main(){


int a[100][100],sum=0,i,j,n1,n2;

printf("Row & Column : ");
scanf("%d%d",&n1,&n2);

for(i=0;i<n1;i++){
for(j=0;j<n2;j++){
    printf("Array A[%d][%d]: ",i,j);
    scanf("%d",&a[i][j]);
}
printf("\n");
}

printf("\n");

for(i=0;i<n1;i++){

for(j=0;j<n2;j++){

    sum=sum+a[i][j];

}
}

printf("The Sum Is : %d\n",sum);
printf("Avarage: %d\n",n1*n2);
printf("The Sum Is : %.2f\n",(float)sum/(n1*n2));


}
