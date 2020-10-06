#include <stdio.h>
int main() {
int A[10][10],B[10][10],C[10][10],i,j,row,column;//sum=0;

printf("Enter Number Of Rows & Column: ");
scanf("%d%d",&row,&column);

printf("Enter Alement For A Matrix\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
    printf("Array A[%d][%d] : ",i,j);
    scanf("%d",&A[i][j]);
}
printf("\n");
}
printf("Enter Alement For B Matrix\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
    printf("Array B[%d][%d] : ",i,j);
    scanf("%d",&B[i][j]);
}
printf("\n");
}
printf(":::::A MATRIX::::\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
    printf("Array A[%d][%d] : ",i,j);
    printf("%d\n",A[i][j]);

}
printf("\n");
}

printf(":::::B MATRIX::::\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
    printf("Array B[%d][%d] : ",i,j);
    printf("%d\n",B[i][j]);

}
printf("\n");
}

for(i=0;i<row;i++){
    for(j=0;j<column;j++){

    C[i][j]=A[i][j]+B[i][j];

}
printf("\n");
}
printf("Input: %d\n",2*(row*column));
//printf("The Sum Is : %d\n",C);

printf(":::::A+B MATRIX::::\n");
for(i=0;i<row;i++){
    for(j=0;j<column;j++){
    printf("%d\n",C[i][j]);

}
printf("\n");
}
getch();
}
