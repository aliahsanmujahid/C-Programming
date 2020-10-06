#include <stdio.h>
int main() {
int A[3][4]={ {5,6,7,8},{9,10,11,12},{13,14,15,16}  },i,j;

for(i=0;i<3;i++){
    for(j=0;j<4;j++){
    printf("Array A[%d][%d] : ",i,j);
    printf("%d\n",A[i][j]);

}
printf("\n");
}
getch();
}
