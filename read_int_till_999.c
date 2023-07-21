#include<stdio.h>
int main()
{
    int n = 0;
    int pos_c = 0;
    int neg_c = 0;
    int zero_c = 0;
    while (n<999)
    {
        printf("enter number = ");
        scanf("%d",&n);

        if (n>0)
        {
            pos_c=pos_c+1;
        }

        else if(n<0)
        {
            neg_c=neg_c+1;
        }

        else
        {
            zero_c=zero_c+1;
        }
    
    }
    printf("no of positive numbers is %d\n",pos_c);
    printf("no of negative integers is %d\n",neg_c);
    printf("no of zeroes is %d",zero_c);
    return 0;
}
