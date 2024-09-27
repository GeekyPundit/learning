#include <stdio.h>
int main()
{
    int a = 1, b = 3, c = 6, min, mid, max;
    printf("enter 3 nos.\n");
    scanf("%d %d %d", &a, &b, &c);

    // printf("enter a no.\n");
    // scanf("%d", &a);
    // printf("enter a no.\n");
    // scanf("%d", &b);
    // printf("enter a no.\n");
    // scanf("%d", &c);
    max = a > b ? a > c ? a : c : b > c ? b
                                        : c;

    min = a < b ? a < c ? a : c : b < c ? b
                                        : c;

    mid = a + b + c - (max + min);
    printf("\nascending order=%d,%d,%d", min, mid, max);
    printf("\ndescending order=%d,%d,%d", max, mid, min);
}