#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista;
    list<int> teste;
    int tam = 5;
    list<int>::iterator it;
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    
    for(int i = 0; i < tam; i++){
        lista.push_front(i);
    }
    cout << "Tamanho da Lista: " << lista.size() << "\n";
    for(int i = 0; i< tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    for(int i = 0; i < tam; i++){
        lista.push_front(i);
    }
    it=lista.begin();
    advance(it, 3);
    lista.insert(it, 50);
    
    lista.sort();
    it=lista.begin();
    advance(it, 5);
    lista.erase(--it);
    
    lista.merge(teste);
    
    cout << "Tamanho da Lista: " << lista.size() << "\n";
    tam = lista.size();
    
    for(int i = 0; i< tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    return 0;
}