#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int i, j, x, n = 4, cont = 0;
   
    for(i = 0; i < n; i++){
        j = 1;
        while(j < n){
            x = 2 * i;
            j = j * 2;
            cont++;
        }
    }
    
    
    cout << "cont = " << cont << endl;
    
    return 0;
}
