#include<stdio.h>
int main()
{
    int n;
    printf("enter value for number n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<i;j++)
        {
            printf("%d",i);
        }
        printf("%d\n",i);
    }
    return 0;
}
