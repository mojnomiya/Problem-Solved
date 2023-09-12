#include <stdio.h>
main()
{
    int n, k, a[50], i;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; a[i] >= a[k - 1] && a[i] && i < n; i++)
        ;
    printf("%d", i);
}