#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[101];
    scanf("%[^\n]%*c", &s);
  	s[100] = '\0';

    fputs("Hello, World!\n",stdout);
    fputs(s,stdout);
    fputs("\n",stdout);
    return 0;
}