#include <stdio.h>

int main()
{
    int n, i, count = 0;
    char str[100];
    scanf("%d%s", &n, str);
    for (i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}