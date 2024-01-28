
#include <iostream>
#include <stack> // PILHA - LIFO (LAST-IN-FIRST-OUT) PRIMEIRO ELEMENTO A ENTRAR É O ÚLTIMO A SAIR 
using namespace std;

int main() {
    stack<int>pilha1, pilha2; //criação de uma pilha
    
    pilha2.push(10); //inserir elementos 
    pilha2.push(20);
    pilha2.push(30);
    pilha2.push(40);
    pilha2.push(50);
    pilha2.emplace(60); //também pode ser usado para inserir elementos
    
    pilha2.swap(pilha1); //troca os elementos de uma pilha para outra (no nosso caso da pilha dois para a pilha um)
    
    cout << "Número de elementos da pilha: "<< pilha1.size() << endl;
    
    while (!pilha1.empty()){
        cout << pilha1.top() // usado para pegar o primeiro elemento (no nosso caso o 50)
        << endl;
        pilha1.pop(); //retira o elemento da nossa pilha 
    }
    
    //verificar se a pilha está vazia
    if (pilha1.empty()){
        cout << "Pilha vazia " << endl;
    }else {
        cout << "Pilha contém elemntos " << endl;
    }
    return 0;
}