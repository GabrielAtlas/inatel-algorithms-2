#include <iostream>

using namespace std;

bool findByBinaryFunc(int vector[], int size, int x){
    bool found = false;
    int init = 0, higher = size - 1, middle = 0;
    
    while((init <= higher) && (!found)){
        middle = (init + higher) / 2;
        if(x < vector[middle]) higher = middle - 1;
        else if(x > vector[middle]) higher = middle + 1;
        else found = true;
    }
    
    return found;
    
}


int main(int argc, const char * argv[]) {
    int vector[20];
    
    int aux = 0, i = 0;
    cin >> aux;
    while(aux != -1){
        vector[i] = aux;
        i++;
        cin >> aux;
    }
    
    int x;
    cout << "Digite o valor de X para ser encontrado: ";
    cin >> x;
    bool found = findByBinaryFunc(vector, i, x);
    
    if(found) cout << "Possui acesso" << endl;
    else cout << "Nao possui acesso" << endl;
    
    return 0;
}
