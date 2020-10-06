#include<stdio.h>

int main(){
while(1){
    char lower,upper;
    printf("Enter Latter = ");
    scanf("%c",&upper);
    printf("You entered = %c\n",upper);
    lower = tolower(upper);
    upper = toupper(lower);
    printf("Lowercase Letter Is = %c size:%d Bytes\n",lower,sizeof(lower));
    printf("Uppercase Letter Is = %c size:%d Bytes\n",upper,sizeof(upper));
}
    return 0;
}
