#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <string> palavras;
    if(palavras.empty()){
        cout << "Pilha vazia.\n\n";
    }else{
        cout << "Pilha com elementos. \n\n";
    }
    palavras.push("Davi");
    palavras.push("Joao");
    palavras.push("Ana");
    palavras.push("Maria");
    if(palavras.empty()){
        cout << "Pilha vazia.\n\n";  
    }else{
        cout << "Pilha com elementos. \n\n";
    }
    cout << "Tamanho da pilha: " << palavras.size() << "\n";
    cout << "Palavra do topo da pilha: " << palavras.top() << "\n";
    
    while(!palavras.empty()){
        cout << "Elemento: " << palavras.top() << "\n";
        palavras.pop();
    }
    return 0;
}