#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[6];
        int first = 0, last = 0;
        scanf("%s", a);
        for (int i = 0; i < 3; i++)
        {
            first += a[i];
            last += a[i + 3];
        }
        if (first == last)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}