//
//  moodle.cpp
//  Teste
//
//  Created by João Gabriel Costa on 08/02/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int vetor[100];
    int x;
    
    //lendo os elementos do vetor
    
    int flag = 0, pos = 0;
    
    while(flag != -1){
        cin >> flag;
        if(flag != -1) {
            vetor[pos] = flag;
            pos++;
        }
    }
    
    cout << "Digite o valor X: ";
    cin >> x;
    cout << endl;
    
    //procurando por x no vetor
    
    int position = -1;
    
    for(int i = 0; i < pos + 1; i++){
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
