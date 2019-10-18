#include <vector>
#include <iostream>
#include <sstream>

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> arrays[n];
    
    for(int i = 0; i < n; i++) {
        std::vector<int> nextArr;
        int length;
        std::cin >> length;
        for (int j = 0; j < length; j++)
        {
            int next;
            std::cin >> next;
            nextArr.push_back(next);
        }
        
        arrays[i] = nextArr;
    }
    for (int j = 0; j < q; j++)
    {
        int x,y;
        std::cin >> x >> y;
        std::cout << arrays[x][y] << std::endl;
    }
    
    return 0;
}
