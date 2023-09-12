#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        int lastDigit = n % 10;
        if (lastDigit != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }
    printf("%d", n);

    return 0;
}