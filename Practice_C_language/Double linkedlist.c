#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}node;

node* createnode(int data)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insertatbeginning(node** head,int data)
{
    node*newnode=createnode(data);
    newnode->next=*head;
    if(*head !=NULL)
    {
        (*head)->prev=newnode;

    }
    *head=newnode;
}

void insertatend(node** head,int data)
{
    node* newnode=createnode(data);
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    node*current=*head;
    while(current->next !=NULL)
    {
        current=current->next;
    }
    current->next=newnode;
    newnode->prev=current;

}
void deletenode(node** head,node* delnode)
{
    if(*head==NULL || delnode==NULL)
    {
        return;
    }
    if(*head==delnode)
    {
        *head=delnode->next;
    }
    if(delnode->next !=NULL)
    {
        delnode->next->prev=delnode->prev;
    }
    if(delnode->prev !=NULL)
    {
        delnode->prev->next=delnode->next;
    }
    free(delnode);
}

void displaylist(node* head)
{
    node* current=head;
    printf("List:");
    while(current !=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    printf("\n");

}

int main()
{
    node* head=NULL;

    insertatend(&head,20);
    insertatend(&head,30);
    insertatend(&head,40);
    insertatbeginning(&head,5);

    displaylist(head);
    deletenode(&head,head->next);
    deletenode(&head,head);
    display(head);
    return 0;
}
