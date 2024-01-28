#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista;
    int tam = 5;
    //Iterator ele serve para percorrer uma coleção de dados
    list<int>::iterator it;
    for(int i = 0 ; i < tam; i++){
        lista.push_front(i);
    }
    cout << "Tamanho da Lista: " << lista.size() << "\n";
    //Iniciamos com a primeira posição da lista
    it = lista.begin();
    advance(it, 5);
    lista.insert(it, 50);
    cout << "Tamanho da Lista: " << lista.size() << "\n";
    tam = lista.size();
    for(int i = 0; i < tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    
    return 0;
}