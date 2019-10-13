#include <stdio.h>
#include <stdlib.h>

#define next_line scanf("\n")

int main()
{
    int n;
    scanf("%d", &n);
    next_line;

    int pos = 0;
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int next;
        scanf("%d", &next);
        if(next == 0) zero++;
        else if(next > 0) pos++;
        else neg++;
    }
    printf("%.6f\n", (float) pos/n);
    printf("%.6f\n", (float) neg/n);
    printf("%.6f\n", (float) zero/n);

    return 0;
}