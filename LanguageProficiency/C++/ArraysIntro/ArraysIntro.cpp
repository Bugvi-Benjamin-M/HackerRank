#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int ints[n];
    for (int i = n-1; i >= 0; i--)
    {
        int next;
        std::cin >> next;
        ints[i] = next;
    }
    for(int j = 0; j < n; j++) {
        printf("%d ",ints[j]);
    }
    return 0;
}
