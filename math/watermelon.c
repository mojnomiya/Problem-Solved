#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    w % 2 == 0 && w != 2 ? printf("YES\n") : printf("NO\n");
    return 0;
}