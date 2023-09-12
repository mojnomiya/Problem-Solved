#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100], temp;
    gets(str);
    for (int i = 0; i < strlen(str); i += 2)
    {
        for (int j = i + 2; j < strlen(str); j += 2)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    puts(str);
}