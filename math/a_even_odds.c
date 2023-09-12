#include <stdio.h>

int main()
{
    long long int n, k, ans;
    scanf("%lld %lld", &n, &k);
    if (k <= (n + 1) / 2)
    {
        ans = (k * 2 - 1);
    }
    else
    {
        ans = ((k - (n + 1) / 2) * 2);
    }
    printf("%lld", ans);
    return 0;
}