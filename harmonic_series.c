#include<stdio.h>
int main()
{
    int s,n;
    printf("enter value for n = ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        s+=1/i;
    }
    printf("the sum is %d",s);
    return 0;
}