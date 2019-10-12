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
            int toPrint;
            if(i <= (iter/2)+1 && j <= (iter/2)+1) toPrint = abs(n - (i < j ? i : j));
            else if(i <= (iter/2)+1 && j > (iter/2)+1) toPrint = abs(j-n - (i < j ? i : j));
            
            
            
            
            
            else if(i > (iter/2)+1 && j <= (iter/2)+1) toPrint = abs(iter - (i < j ? i:j));
            else toPrint = abs(n - (i < j ? i : j));
            printf("%d",toPrint);
        }
        printf("\n");
    }
    return 0;
}

