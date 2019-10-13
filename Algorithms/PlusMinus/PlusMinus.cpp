#include <stdio.h>
#include <stdlib.h>

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

    int pos = 0;
    int neg = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int next;
        scanint(next);
        if(next == 0) zero++;
        else if(next > 0) pos++;
        else neg++;
    }
    
    printf("%.6f\n", (float) pos/n);
    printf("%.6f\n", (float) neg/n);
    printf("%.6f\n", (float) zero/n);
    return 0;
}