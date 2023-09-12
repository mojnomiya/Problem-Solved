#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int a, b, moves = 0;
        scanf("%d %d", &a, &b);
        if (a % b == 0)
        {
            moves += 0;
        }
        else
        {
            moves += b - a % b;
        }
        printf("%d\n", moves);
    }
    return 0;
}