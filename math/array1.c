#include<stdio.h>
int main(){

int mark[100],sum=0,n;

printf("How Many Numbers: ");
scanf("%d",&n);

for(int i=0;i<n;i++){

scanf("%d",&mark[i]);

}
int max=mark[0];

for(int i=1;i<n;i++){
if(max<mark[i]){
   max=mark[i];
   printf("%d\n",max);
}
}
printf("Max is:\n");
printf("%d\n",max);
return 0;
}
