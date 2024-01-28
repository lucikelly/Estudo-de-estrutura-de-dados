#include <iostream>
using namespace std;
struct Aluno{
    string nome;
    int idade;
};
int main() {
    Aluno a1;
    a1.nome = "Ana";
    a1.idade = 20;
    
    cout << "Nome: " << a1.nome << "\n";
    cout << "Idade: " << a1.idade << "\n";
    
    return 0;
}