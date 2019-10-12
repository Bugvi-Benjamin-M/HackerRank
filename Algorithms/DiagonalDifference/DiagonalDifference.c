#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n");

    int diag1Sum = 0;
    int diag2Sum = 0;
    for(int i = 0; i < n; i++) {
        int row[n];
        for(int r = 0; r < n; r++) {
            scanf("%d", &row[r]);
        }
        
        for (int j = 0; j < n; j++)
        {
            if(i == j) {
                diag1Sum += row[j];
                diag2Sum += row[n-1-j];
            }
        }
    }
    printf("%d", abs(diag1Sum-diag2Sum));
    return 0;
}
    