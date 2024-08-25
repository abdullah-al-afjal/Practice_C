#include <stdio.h>
#include <stdlib.h>

struct node
 {
    int data;
    struct node *next;
};


  void insert_node(struct node **head, int data)
  {
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
        {
        *head = new_node;
    }
    else
    {
        struct node *current = *head;
        while (current->next != NULL)
            {
            current = current->next;
        }
        current->next = new_node;
    }
    void print_list(struct node *head)
     {
    while (head != NULL)
        {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


struct node* add_lists(struct node *list1, struct node *list2)
 {
    struct node *result = NULL;
    struct node *temp, *prev = NULL;
    int carry = 0, sum;

    while (list1 != NULL || list2 != NULL)
        {
        sum = carry + (list1 ? list1->data : 0) + (list2 ? list2->data : 0);

        carry = (sum >= 10) ? 1 : 0;

        sum = sum % 10;


        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = sum;
        temp->next = NULL;

        if (result == NULL)
            {
            result = temp;
           }
        else
           {
            prev->next = temp;
            }
        prev = temp;

        if (list1)
            {
            list1 = list1->next;
            }

        if (list2)
            {
            list2 = list2->next;
           }
    }

    if (carry > 0)
        {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = carry;
        temp->next = NULL;
        prev->next = temp;
    }

    return result;
}



