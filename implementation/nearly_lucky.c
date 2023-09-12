#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    int lucky = 0;
    for (n; n != 0; n = n / 10)
    {
        int r = n % 10;
        if (r == 7 || r == 4)
            lucky++;
    }
    (lucky == 4 || lucky == 7) ? printf("YES") : printf("NO");
    return 0;
}