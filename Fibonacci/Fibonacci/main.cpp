#include <iostream>

using namespace std;


int fib(int aux){
    if(n == 0 || n == 1) // condição de parada
        return 1;
    else
        return fib(n - 1) + fib(n - 2); // calcula a sequencia até chegar no valor 1 ou 0.
}

int main(int argc, const char * argv[]) {
    int number;
    cout << "Digite o numero de fibonacci: ";
    cin >> number;
    int result = fib(number);
    cout << endl << "O resultado é: " << result << endl;
    return 0;
}
