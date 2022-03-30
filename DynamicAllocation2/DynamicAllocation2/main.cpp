#include <iostream>
#include <iomanip>

using namespace std;

struct Notas {
    int p1, p2, p3, p4;
    double media;
    
    void calculateMedia(){
        media = (p1 + p2 + p3 + p4) / 4.0;
    }
};

int main(int argc, const char * argv[]) {
    
    Notas * notasAlunos;
    
    int totalAlunos;
    
    cin >> totalAlunos;
    
    
    notasAlunos = new Notas[totalAlunos];
    
    double totalMediasAlunos;
    
    for(int i = 0; i < totalAlunos; i++){
        Notas aluno = notasAlunos[i];
        
        cin >> aluno.p1 >> aluno.p2 >> aluno.p3 >> aluno.p4;
        
        aluno.calculateMedia();
        
        totalMediasAlunos += aluno.media;
        
    }
    
    cout << fixed << setprecision(2) << (totalMediasAlunos / totalAlunos) << endl;
    
    delete notasAlunos;
    
    return 0;
}
