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
    Aluno a1, a2;
    a1.cadastrarAluno("Ana", 30);
    a1.imprimirDados();
    a2.cadastrarAluno("Paulo", 40);
    a2.imprimirDados();
    return 0;
}