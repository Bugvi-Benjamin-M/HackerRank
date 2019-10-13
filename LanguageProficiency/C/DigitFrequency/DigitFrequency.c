#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000

int main() {

    // frequencies
    int freq[10] = {0};

    char buff[MAX_LEN];
    fgets(buff, MAX_LEN, stdin);

    int i = 0;
    while(buff[i] != '\0') {
        if(buff[i] >= 48 && buff[i] <= 57) {
            freq[buff[i] - 48]++;
        }
        i++;
    }
    
    for(int i = 0; i<10; i++) {
        printf("%d ", freq[i]);
    }
    return 0;
}
