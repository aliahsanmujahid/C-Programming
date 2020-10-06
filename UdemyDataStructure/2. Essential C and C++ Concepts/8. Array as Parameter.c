/*#include <stdio.h>

void fun(int *a,int n){
 a[0] = 25;
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
int main()
{
    int a[5] = {2,4,6,8,10};
    fun(&a,5);
    printf("\n");
    for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
    return 0;
}*/

#include <stdio.h>

int fun(int n){
int *p;
p= (int *)malloc(n*sizeof(int));
return (p);
}
int main()
{
    int *a;
    a=fun(5);
    printf("%d ",a);

}


