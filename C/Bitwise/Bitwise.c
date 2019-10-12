#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int andMax = 0;
    int orMax = 0;
    int xorMax = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            int and = i & j;
            int or = i | j;
            int xor = i ^ j;
            andMax = and < k && and > andMax ? and : andMax;
            orMax = or < k && or > orMax ? or : orMax;
            xorMax = xor < k && xor > xorMax ? xor : xorMax;
        }
    }
    printf("%d\n", andMax);
    printf("%d\n", orMax);
    printf("%d", xorMax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
