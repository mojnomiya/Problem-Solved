// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], a[] = "hello";
    scanf("%s", s);
    int f = 0, j = 0;
    for (int i = 0; i < 5; i++)
    {
        while (s[j] != '\0')
        {
            if (a[i] == s[j])
            {
                f++;
                j++;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    if (f == 5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}