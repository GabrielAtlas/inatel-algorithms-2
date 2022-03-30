#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int size;
    
    cin >> size;
    
    int vetor[size];
    
    int * pt;
    
    for(int i = 0; i < size; i++){
        cin >> vetor[i];
        if(i == 0) pt = &vetor[i];
    }
    
    for(int i = 0; i < size; i++){
        cout << * pt << " ";
        pt++;
    }
    
    return 0;
}
