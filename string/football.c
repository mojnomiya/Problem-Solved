#include <stdio.h>
#include <string.h>

int main()
{
    char p[101];
    scanf("%s", p);
    int i, j, flag = 0;

    for (i = 0; p[i] != '\0'; i++)
    {
        for (j = i + 1; j < i + 7; j++)
        {
            if (p[i] == p[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}