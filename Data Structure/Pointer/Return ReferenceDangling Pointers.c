#include<stdio.h>


int* getvalue(){
  int x;
  x=20;
  return &x;

}

int main(){
int* px=getvalue();
printf("\n%d",*px);

return 0;
}
