#include<stdio.h>
int power(int m,int n)
{
 if(n==0)
 return 1;
 return power(m,n-1)*m;
}
int power1(int m,int n)
{
 if(n==0)
 return 1;
 if(n%2==0)
 return power1(m*m,n/2);

 return m * power1(m*m,(n-1)/2);
}

int power2(int m, int n) {
    int s = 1;
    for (int i = 0; i < n; ++i)
        s = s * m;
    return s;
}

int main()
{
 int r= power2(2,9);
 printf("%d ",r);
 return 0;
}
