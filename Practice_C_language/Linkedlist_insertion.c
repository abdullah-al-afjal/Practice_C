#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;


void createlist(int n);
void displaylist();
void insertAtBeginnig();
void insertAtEnd();
void insertAtMid(int position);

int main()
{
    int n,position;
    printf("Enter the number of input\n ");
    scanf("%d",&n);
    createlist(n);
    printf("\n\n\n Data in the last are\n");
    displaylist();
    insertAtBeginnig();
    printf("\n\n\n Data in the last are\n");
    displaylist();
    printf("Enter the position where you want to insert the new node\n");
    scanf("%d",&position);
    insertAtMid(position);
    printf("\n\n");
    displaylist();
    insertAtEnd();
    printf("Enter the number of input\n ");
    displaylist();
    return 0;

}
void createlist(int n)
{
    struct node  *newnode,*current;
    int value,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        printf("Memory Full\n");
    else
    {
        printf("Enter the first value\n");
        scanf("%d",&value);
        head->data=value;
        head->next=NULL;
        current=head;
        for(i=1;i<n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter value %d\n",i+1);
            newnode->data=value;
            newnode->next=NULL;
            current->next=newnode;
            current=newnode;
        }
    }
}
void insertAtBeginnig()
{
    struct node *newnode;
    printf("\n\n Enter the value you want t insert at the beginning of the link list\n ");
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\n Enter the value you want t insert at the beginning of the link list\n ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertAtMid(int position)
{
    struct node* current,*newnode;
    int i;

    current=head;
    for(i=1;i<position-1;i++)
    {
       current=current->next;
    }
        current=current->next;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\n Enter the value you want to insert at the beginning of the link list\n ");
    scanf("%d",&newnode->data);
    newnode->next=current->next;
    current->next=newnode;

}
void insertAtEnd()
{
    struct node* current,*newnode;
    current=head;
    while(current->next!=NULL)
    {
      current=current->next;
    }

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\n Enter the value you want t insert at the beginning of the link list\n ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current->next=newnode;

}
void displaylist()
{
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}




