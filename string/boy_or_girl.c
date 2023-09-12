#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int dc = strlen(str), i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                dc--;
                break;
            }
        }
    }
    printf(dc % 2 ? "IGNORE HIM!" : "CHAT WITH HER!\n");
    return 0;
}