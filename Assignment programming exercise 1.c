#include <stdio.h>

int main(void)
{   int a, b, c, e;
    printf(" Enter the first value:");
    scanf("%d", &a);
    printf(" Enter the second value:");
    scanf("%d", &b);
    printf(" Enter the third value:");
    scanf("%d", &e);
    c = a+b+e;
    printf("%d + %d + %d = %d\n", a, b, e, c);

    return 0;
}
