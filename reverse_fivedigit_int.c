#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("enter the five digit integer = ");
    scanf("%d",&n);
    for (;n!=0;n=n/10)
    {
        int r = n%10;
        rev=rev*10+r;
    }
    printf("reversed number = %d",rev);
return 0;
}
