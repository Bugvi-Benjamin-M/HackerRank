#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    while(1) {
        sum += n % 10;
        if (n < 10) break;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}

