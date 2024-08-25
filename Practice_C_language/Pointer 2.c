#include<stdio.h>
int main ()
{
    int x=10,y=20,z=30,sum;
    int *ptr1,*ptr2,*ptr3;

    ptr1=&x;
    ptr2=&y;
    ptr3=&z;

    sum =*ptr1+ *ptr2+*ptr3;

    printf("sum=%d\n",sum);

    getch();
}
