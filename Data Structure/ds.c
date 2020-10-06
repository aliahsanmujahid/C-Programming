#include<stdio.h>
#include<stdlib.h> //exit()
#include<stdbool.h> // bool

#define max 5

int stack[max], top=-1;

void push();
int pop();

void pip(); //display()
void peek();//top
bool isFull();
bool isEmpty();
int getSize();


int main(){

int choice;
for(;;){

    printf("\n1.Push\n");
    printf("2.Pop\n");
    printf("3.Pip\n");
    printf("4.Peek\n");
    printf("5.GetSize\n");
    printf("6.Exit\n");
    printf("Please Enter Your Choice: ");
    scanf("%d",&choice);

    switch(choice){

       case 1:
           push();
        break;
      case 2:
           pop();
           break;
      case 3:
           pip();
           break;
      case 4:
           peek();
           break;
      case 5:
           printf("\nSize is %d\n",getSize());
           break;
      case 6:
           exit(1);
           break;

      default:
                printf("\nInvalid Choice!\n");
    }
}
return 0;
}


void push()
{
    int item;
    if(isFull())
    {
        printf("\nStack is Full!\n");
    }
    else
    {
        printf("\nEnter Push item: ");
        scanf("%d",&item);
        top++;

        stack[top]=item;
        printf("\nSize: %d",getSize());
        printf("\n%d was pushed\n",stack[top]);
    }
}


int pop()
{
    int item;
    if(isEmpty())
    {
        printf("\nStack is Empty!\n");
        return;
    }
    else
    {
        item=stack[top];
        top--;
        printf("\n%d was popped\n",item);
        return item;

    }
}

void pip(){

int i;

  if(isEmpty()){

    printf("\nStack Is Empty.\n");
  }else{

   for(i=top;i>=0;i--){

    printf("\n%d",stack[i]);
    printf("\n");

   }
  }
}

void peek(){

if(isEmpty){
    printf("\nStack Is Empty.\n");

}else{

  printf("Top Is : %d",stack[top]);

}

}

bool isFull(){

if(top==max-1){
    return true;
}else{
   return false;
}
}
bool isEmpty(){

if(top==-1){
    return true;
}else{
   return false;
}

}
int getSize(){

   return top+1;

}

