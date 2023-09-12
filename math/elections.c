#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c)
            printf("1 1 1\n");
        else if (a > b && a > c)
            printf("%d %d %d\n", a - a, a - b + 1, a - c + 1);
        else if (b > a && b > c)
            printf("%d %d %d\n", b - a + 1, b - b, b - c + 1);
        else if (c > a && c > b)
            printf("%d %d %d\n", c - a + 1, c - b + 1, c - c);
        else if (a == b && a > c)
            printf("%d %d %d\n", a - a + 1, a - b + 1, a - c + 1);
        else if (c == b && b > a)
            printf("%d %d %d\n", b - a + 1, b - b + 1, b - c + 1);
        else if (a == c && a > b)
            printf("%d %d %d\n", a - a + 1, a - b + 1, a - c + 1);
    }
    return 0;
}