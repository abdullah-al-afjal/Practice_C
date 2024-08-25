#include<stdio.h>
#include<stdlib.h>

 struct node
 {
 int data;
 struct node* next
 };

 int search(int searchitem,head)
 {
     struct node* current;
    //current=head;
    while(head!=NULL)
    {
        if(head->data==searchitem)
        {
            printf("search item is fund");
            break;
        }
        else if(head==NULL)
        {
            printf("search item not fund");
        }
        else
        {
            head=head->next;
        }
    }

 }
 int main()
 {
      struct node* head;
      struct node* node1;
      struct node* node2;

     head=malloc(sizeof(struct node));
     node1=malloc(sizeof(struct node));
     node2=malloc(sizeof(struct node));

     head->data=10;
     head->next=node1;

     node1->data=15;
     node1->next=node2;

     node2->data=16;
     node2->next=NULL;
     search(15,head);

 }



