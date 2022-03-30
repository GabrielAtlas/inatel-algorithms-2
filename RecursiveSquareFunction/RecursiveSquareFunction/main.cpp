#include <iostream>
#include <cmath>

using namespace std;

double raiz(int x, double x0, double epsilon){
    if(abs(x0 * x0 - x) <= epsilon)
        return x0;
    else
        return raiz(x, (x0 * x0 + x) / (2.0 * x0), epsilon);
}

int main(int argc, const char * argv[]) {
    int x;
    double epsilon, x0;
    
    cin >> x;
    cin >> x0;
    cin >> epsilon;
    //cout << endl;
    
    double result = raiz(x, x0, epsilon);
    
    cout << result << endl;
    
    return 0;
}
