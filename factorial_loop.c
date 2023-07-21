#include <stdio.h>
int main()
{
    int n;
    int f = 1;
    printf("enter number = ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
    {
        f=f*i;
    }
    printf("the factorial is %d",f);
    return 0;
}