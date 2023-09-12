#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, ways = 0;
        scanf("%d", &n);
        printf("%d\n", (n - 1) / 2);
    }
    return 0;
}