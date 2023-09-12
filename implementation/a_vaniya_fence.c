#include <stdio.h>

int main() {
    int n, h, x, w=0;
    scanf("%d %d", &n, &h);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        if(x>h){
            w+=2;
        }else{
            w+=1;
        }
    }
    printf("%d", w);

    return 0;
}