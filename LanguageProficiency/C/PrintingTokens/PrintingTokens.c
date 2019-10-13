#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    char delim = ' ';
    char *next = strtok(s, &delim);
    while(next != NULL) {
        printf("%s\n", next);
        next = strtok(NULL, &delim);
    }
    free(s);
    return 0;
}

