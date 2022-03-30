#include <iostream>

using namespace std;

void insercaoDireta(int arr[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = arr[step]; // array [1, 2, 3, 4, 5] (array[1]) = 2
        int j = step - 1; // 1 - 1 = 0
        while (key > arr[j] && j >= 0) // 2 > arr[j] (1) &&
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, const char * argv[]) {
    int vector[100];
    
    int i = -1, pos = 0;
    
    cin >> i;
    
    while(i != 0){
        vector[pos] = i;
        pos++;
        cin >> i;
    }
    
    insercaoDireta(vector, pos);
    
    for(int i = 0; i < pos; i++){
        cout << vector[i] << " ";
    }
    
    return 0;
}
