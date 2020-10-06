#include <stdio.h>
int main() {
int A[3][4],B[3][4],i,j;

printf("Enter Alement For A Matrix\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Array A[%d][%d] : ",i,j);
    scanf("%d",&A[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Array A[%d][%d] : ",i,j);
    printf("%d\n",A[i][j]);

}
printf("\n");
}
printf("Enter Alement For B Matrix\n");
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Array B[%d][%d] : ",i,j);
    scanf("%d",&B[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Array B[%d][%d] : ",i,j);
    printf("%d\n",B[i][j]);

}
printf("\n");
}
getch();
}
