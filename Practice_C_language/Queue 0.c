#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5
int ourqueue[CAPACITY];
int front=0,rear=-1,totalItem=0;

  bool isfull()
 {
    if(totalItem==0)
    {
        return true;
    }
    return false;
 }
   bool isempty()
 {
    if(totalItem==0)
    {
        return true;
    }
    return false;
 }
  void enqueue(int item)
 {
    if(isfull())
    {
        printf("sorry,the queue isfull\n");
        return;
    }
    rear=(rear+1)%CAPACITY;
    ourqueue[rear]=item;
    totalItem++;
 }
  int dequeue()
 {
    if(isempty())
    {
        printf("sorry,the queue is empty \n");
        return 0;
    }
    int frontItem=ourqueue[front];
    ourqueue[front+1]%CAPACITY;
    totalItem--;
    return frontItem;
 }

  void printQueue()
 {
    int i;
    printf("queue:");
    for(i=0;i<CAPACITY;i++)
    {
        printf("%d",ourqueue[i]);
    }

    printf("\n");

 };

  int main()
 {
    //printf("\n **********\n let's implement our queue.\n\n");
    enqueue(10);
    enqueue(20);
    enqueue(40);
    printQueue();
    enqueue(50);
    printQueue();
    enqueue(60);
    printf("dequeue :%d\n",dequeue());
    printQueue();
    enqueue(70);
    printQueue();

   return 0;

 }
