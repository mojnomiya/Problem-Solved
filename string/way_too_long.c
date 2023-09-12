#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    char words[100];
    for (i = 0; i < n; i++)
    {
        scanf("%s", &words);
        int length = strlen(words);
        if (length > 10)
        {
            printf("%c%d%c\n", words[0], length - 2, words[length - 1]);
        }
        else
        {
            puts(words);
        }
    }
    return 0;
}