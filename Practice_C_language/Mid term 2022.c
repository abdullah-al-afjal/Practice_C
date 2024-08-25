//50 24 12 13 30 89 65 49 88
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,number[100];
    int i,count=0,x=0;
    printf("enter Number of stdudents");
    scanf("%d",&n);
    printf("Enter Numbers");
    for (i=0;i<n;i++)
    {
        scanf("%d",&number[i]);

    }
    for(i=1;i<n;i++)
    {
        if(number[0]>number[i])
            count=count+1;
        else
                x=x+1;
    }
    printf("less=%d \n grater=%d",count,x);

    getch();

}
