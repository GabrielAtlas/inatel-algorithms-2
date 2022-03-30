#include <iostream>

using namespace std;

int potencia(int a, int n){
    if(n == 0)
        return 1;
    else
        return a * potencia(a, (n - 1));
}

int main(int argc, const char * argv[]) {
    
    int a, n;
    
    cin >> a >> n;
    
    int result = potencia(a, n);
    
    cout << result << endl;
    
    return 0;
}
