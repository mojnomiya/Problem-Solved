#include <stdio.h>

int main()
{
    int k, n, w, i, total = 0;
    scanf("%d %d %d", &k, &n, &w);
    for (i = 1; i <= w; i++)
    {
        total += i * k;
    }
    printf("%d", total >= n ? total - n : 0);
    return 0;
}