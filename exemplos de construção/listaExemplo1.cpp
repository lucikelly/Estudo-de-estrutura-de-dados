#include <iostream>
#include <list>

using namespace std;

int main (){
     
    list<int> exemplo; // declaração do tipo da lista e seu nome 
    // list<int> exemplo(50); // nesse exemplo o tamano da minha lista é 50
    // list<int> exemplo(5,50); // nesse exemplo prencho meus 5 espaços da lista com o valor 50
    // list<int> exemplo, exemplo2, exemplo3; // criando varias listas
    list<int>::iterator it;  // usado o intereitor, para mexer nos espaço de meio atravez do controle dele 
    int tamanhoList;
    
    tamanhoList = 10;
    for (int i = 0; i < tamanhoList; i++ ) {//preencher a lista 
        exemplo.push_front(i);
    }
    //manipulação de elemento
    /*it = exemplo.begin(); // primeira posição 
    advance(it, 5); // local onde vou inserir o elemento ou seja posição 5
    exemplo.insert (it, 0); // inserindo o elemento, valor 0*/
    
    //exemplo.sort() //ordena minha lista
    exemplo.reverse(); // reverte a o ordem
    
    
    cout <<"Tamanho da lista: "<< exemplo.size() << "\n\n";
    tamanhoList = exemplo.size();
    for (int i = 0; i < tamanhoList; i++ ) {//preencher a lista 
        cout << exemplo.front() << " ";
        exemplo.pop_front();
    }
    return 0;
}