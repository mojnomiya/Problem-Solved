#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, j,x, y;
    int arr[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1){
              printf("%d\n", abs(2-i)+abs(2-j));  
            }
        }
    }
    
    return 0;
}