#include <iostream>
using namespace std;
struct Aluno{
    string nome;
    int idade;
    void cadastrarAluno(string stNome, int stIdade){
        nome = stNome;
        idade = stIdade;
    }
    void imprimirDados(){
        cout << "Nome: " << nome << "\n";
        cout << "Idade: " << idade << "\n";
    }
};
int main() {
    Aluno *alunos = new Aluno[2];
    Aluno a1, a2;
    alunos[0] = a1;
    alunos[1] = a2;
    alunos[0].cadastrarAluno("Maria", 21);
    alunos[1].cadastrarAluno("Flavio", 25);
    
    for(int i = 0; i < 2; i++){
        alunos[i].imprimirDados();
    }
    return 0;
}