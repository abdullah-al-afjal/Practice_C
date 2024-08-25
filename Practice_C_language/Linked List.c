#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 struct node{
    int data;
    struct node *next;
 };
  int main()
  {
      struct node *a,*b,*c,*d,*e;

      a=(struct node*)malloc(sizeof(struct node));
      b=(struct node*)malloc(sizeof(struct node));
      c=(struct node*)malloc(sizeof(struct node));
      d=(struct node*)malloc(sizeof(struct node));
      e=(struct node*)malloc(sizeof(struct node));

      a->data=20;
      b->data=30;
      c->data=40;
      d->data=50;
      e->data=60;

      a->next=b;
      b->next=c;
      c->next=d;
      d->next=NULL;
      printf("Your Linked list: %d %d %d %d %d\n",a->data,b->data,c->data,d->data,e->data);

      getch();

  }
