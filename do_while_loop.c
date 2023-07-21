#include <stdio.h>
int main()
{
    int i = 1, j = 1, next;

    printf("%d, %d, ",i,j);

    do {
        next = i+j;
        if (next <= 150) {
            printf("%d, ", next);
        }
        i = j;
        j = next;
    } while (next <= 150);

    return 0;
}
