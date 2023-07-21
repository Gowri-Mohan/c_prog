#include<stdio.h>
int main()
{
    int x,y;
    int a=1;
    printf("enter value for x = ");
    scanf("%d",&x);
    printf("enter value for y = ");
    scanf("%d",&y);
    for (int i = 1; i < y; i++)
    {
        a=x*x;
        a=a*x;
    }
    printf("the answer is %d",a);
    return 0;
}
