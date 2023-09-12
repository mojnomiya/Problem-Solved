#include <stdio.h>

int main() {
    int n,i,a=0,d=0;
    scanf("%d", &n);
    char game[n+1];
    scanf("%s", game);
    for(i=0;i<n;i++)
    {
        if(game[i]=='A')
            a++;
        else if(game[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton\n");
    else if(d>a)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}