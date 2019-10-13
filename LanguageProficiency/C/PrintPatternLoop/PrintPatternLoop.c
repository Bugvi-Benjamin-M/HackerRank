#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int iter = 2*n-1;
    for(int i = 0; i < iter; i++) {
        for(int j = 0; j < iter; j++) {
            int min = i < j ? i : j;
            min = min < iter-1-i ? min : iter-1-i;
            min = min < iter-1-j ? min : iter-1-j;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}

