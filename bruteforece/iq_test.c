#include <stdio.h>

int main()
{
    int n, evens = 0, e_ind, odds = 0, o_ind;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            evens++;
            e_ind = i + 1;
        }
        else
        {
            odds++;
            o_ind = i + 1;
        }
    }
    if (evens == 1)
        printf("%d", e_ind);
    else if (odds == 1)
        printf("%d", o_ind);

    return 0;
}
