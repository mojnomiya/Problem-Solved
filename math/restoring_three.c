#include <stdio.h>

int main()
{
    int i, n[4], max;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n[i]);
    }
    max = n[0];
    for (int i = 0; i < 4; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (max != n[i])
        {
            printf("%d ", max - n[i]);
        }
    }
    return 0;
}