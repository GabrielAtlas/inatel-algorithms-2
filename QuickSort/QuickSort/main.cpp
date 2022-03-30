#include <iostream>
#include <cmath>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j) {
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int) round((esq + dir) / 2.0)];
    do {
        while (vetor[esq] < pivo) esq++;
        while (vetor[dir] > pivo) dir--;
        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);
    if (dir - i >= 0) quickSort(vetor, tamanho, i, dir);
    if (j - esq >= 0) quickSort(vetor, tamanho, esq, j);
}

int main(int argc, const char * argv[]){
    
    int vetor[200];
    int aux, size = 0;
    
    cin >> aux;
    
    while(aux != -1){
        vetor[size++] = aux;
        cin >> aux;
    }
    
    quickSort(vetor, size, 0, size);
    
    for(int i = 0; i < size; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}

