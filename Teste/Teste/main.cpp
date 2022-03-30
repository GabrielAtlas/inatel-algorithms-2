//
//  main.cpp
//  Teste
//
//  Created by João Gabriel Costa on 08/02/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int vetor[10];
    int tam, x;
    
    //lendo tamanho do vetor
    
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    cout << endl;
    
    //lendo os elementos do vetor
    
    cout << "Digite os elementos do vetor:";
    for(int i = 0; i < tam; i++){
        cin >> vetor[i];
    }
    cout << endl;
    
    //lendo x
    
    cout << "Digite o valor X: ";
    cin >> x;
    cout << endl;
    
    //procurando por x no vetor
    
    int position = -1;
    
    for(int i = 0; i < tam; i++){
        if(vetor[i] == x) position = i;
    }
    
    //mostrando a posicao em que x foi encontrada no vetor
    
    if(position != -1){
        cout << "O valor de X foi encotrado no vetor na posição " << position << endl;
        return 0;
    }
    
    cout << "O valor de X não foi encontrado no vetor." << endl;
    
    return 0;
}
