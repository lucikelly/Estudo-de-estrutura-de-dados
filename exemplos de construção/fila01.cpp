#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue <string> nomes;
    cout << "Tamanho da fila: " << nomes.size() << "\n";
    cout << "Fila vazia? " << nomes.empty() << "\n";
    nomes.push("Davi");
    cout << "Tamanho da fila: " << nomes.size() << "\n";
    nomes.push("Joao");
    nomes.push("Ana");
    nomes.push("Carlos");
    cout << "Tamanho da fila: " << nomes.size() << "\n";
    cout << "Primeiro nome: " << nomes.front() << "\n";
    cout << "Ultimo nome: " << nomes.back() << "\n";
    
    cout << "Fila vazia? " << nomes.empty() << "\n";
    
    while(!nomes.empty()){
        cout << "Nome: " << nomes.front() << "\n";
        nomes.pop();
    }
    cout << "Tamanho da fila: " << nomes.size() << "\n";
    cout << "Fila vazia? " << nomes.empty() << "\n";
    
    return 0;
}