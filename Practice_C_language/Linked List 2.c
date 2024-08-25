#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct StudentData
{
    char *stu_name;
    int stu_id;
    int stu_age;
};
 int main()
  {
     struct StudentData student;

     student.stu_name="Abdullah";
     student.stu_id = 0242220005101730;
     student.stu_age = 20;


     printf(" \nStudent Name is: %d\n", student.stu_name);
     printf(" \nStudent Id is: %d\n", student.stu_id);
     printf(" \nStudent Age is: %d\n", student.stu_age);
     getch();

}

struct node{

       int data;

       struct node *next;
};


 struct node
{

       int data;

       struct node *next;
};
int main()
{
  struct node *a,*b;
     a=(struct node*)malloc(struct sizeof(struct node));
     b=(struct node*)malloc(struct sizeof(struct node));
      a->data=20;
      b->data=4.50;

      a->next=b;
      b->next=NULL;

      printf("%d %d\n",a->data,b->data);

      getch();


}

