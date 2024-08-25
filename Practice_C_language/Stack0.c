#include<stdio.h>
#include<conio.h>
#define CAPACITY 10
int stack[CAPACITY];
int top=-1;

void push(int x)
{
 if(top<CAPACITY-1)
 {
     top= top+1;
     stack[top]=x;
     printf("Succesfully added item:%d\n",x);
     }
     else
        {
        printf("Exception! No spaces!");
     }
 }



int pop()
{
    if(top>=0)
    {
        int val= stack[top];
        top=top-1;
        return val;
    }
    printf("Exception from pop! empty stack\n");

    return -1;
}

int peek()
{
    if(top>=0)
        {
        return stack[top];
    }
    printf("Exception from peek!empty stack \n");
    return -1;
}
int main()
{
    printf("Implementing my stack in c\n");
    peek();
    push(10);
    printf("\n");
    push(20);
    printf("\n");
    push(30);                      //30
    printf("pop item :%d\n",pop());
    push(50);
    printf("\n");
    push(60);
    printf("\n");
    push(70);                       //70
    printf("pop item :%d\n",pop());
    push(40);
    printf("Top of stack : %D\n",peek());
    push(80);                             //80
    printf("pop item :%d\n",pop());
    push(90);
    printf("\n");
    push(100);

    getch();
}
