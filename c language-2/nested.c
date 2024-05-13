#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the value of x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
            printf("x is greater");
        }
        else
        {
            printf("z is greater");
        }
    }
    else
    {
        if(y>z)
        {
            printf("y is greater");
        }
        else
        {
            printf("z is greater");
        }
    }
}