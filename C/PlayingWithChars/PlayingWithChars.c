#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{

    char ch;
    scanf("%c", &ch);
    scanf("\n");

    char s[MAX_LEN];
    scanf("%s", &s);
    scanf("\n");

    char sen[MAX_LEN];
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}