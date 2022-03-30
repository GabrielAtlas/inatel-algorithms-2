//
//  main.cpp
//  DynamicAllocation
//
//  Created by João Gabriel Costa on 30/03/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct Notas {
    unsigned int p1, p2, p3, p4;
    double media;
    
    void calculateMedia(){
        media = (p1 + p2 + p3 + p4) / 4.0;
    }
};

int main(int argc, const char * argv[]) {
    
    Notas * notas;
    
    notas = new Notas;
    
    cin >> notas->p1 >> notas->p2 >> notas->p3 >> notas->p4;
    
    notas->calculateMedia();
    
    cout << fixed << setprecision(2) << notas->media << endl;
    
    delete notas;
    
    
    return 0;
}
