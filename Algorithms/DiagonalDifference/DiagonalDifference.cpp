#include <stdlib.h>
#include <stdio.h>
#include <vector>


#define gc getchar_unlocked

inline void scanint(int &x)
{
    int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main()
{
    int n;
    scanint(n);

    int diag1Sum = 0;
    int diag2Sum = 0;
    for(int i = 0; i < n; i++) {
        std::vector<int> row(n);
        for(auto &i : row) {
            scanint(i);
        }
        for(int j = 0; j < n; j++) {
            if(i == j) {
                diag1Sum += row[j];
                diag2Sum += row[n-1-j];
            }
        }
    }
    printf("%d", std::abs(diag1Sum-diag2Sum));
    return 0;
}
