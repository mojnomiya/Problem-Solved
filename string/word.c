#include <stdio.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int lower = 0, upper = 0, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }
    if (lower >= upper)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }
    printf("%s", s);

    return 0;
}