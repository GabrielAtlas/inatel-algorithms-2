
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int i, j, n, x;
    
    for(i = 0; i < n; i++) // n
        x = 2 * i;
    
    for(i = 0; i < 2 * n; i++) // 2n
        x = 2 * i;
    
    for(i = 0; i < n; i++) // n^2
        for(j = 0; j < n; j++)
            x = i + j;
    
    
    
    // T(n) = n^2 + 3n
    
    return 0;
}
