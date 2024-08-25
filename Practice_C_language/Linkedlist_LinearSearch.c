#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;

void createlist(int n);
void displaylist();
void searching(int searchitem);

int main()
{
    int n,position,value;

    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\n Data in the list are\n");
    displaylist();
    printf("Enter the value you want to search\n");
    scanf("%d",&value);
    searching(value);
    return 0;
}
void createlist(int n)
{
    struct node *newnode,*current;
    int value,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        printf("Memory full\n");
    else
    {
        printf("Enter first value\n");
        scanf("%d",&value);

        head->data=value;
        head->next=NULL;
        current=head;

        for(i=1;i<n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter value %d\n",i+1);
            scanf("%d",&value);

            newnode->data=value;
            newnode->next=NULL;
            current=newnode;

        }

    }
}
void searching(int searchitem)
{
    int i=0;
    struct node* current;
    current=head;
    while(head!=NULL)
    {
        if(head->data==searchitem)
        {
            printf("search item is fund");
            //break;
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
