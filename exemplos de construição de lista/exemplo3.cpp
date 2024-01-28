#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista;
    int tam = 5;
    list<int>::iterator it;
    
    lista.push_front(9);
    lista.push_front(0);
    lista.push_front(5);
    lista.push_front(3);
    lista.push_front(7);
    
    cout << "Tamanho da lista: " << lista.size() << "\n\n";
    tam = lista.size();
    //Realizar a organização da lista
    lista.sort();
    for(int i=0; i < tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    cout << "Tamanho da lista: " << lista.size() << "\n\n";
    lista.push_front(9);
    lista.push_front(0);
    lista.push_front(5);
    lista.push_front(3);
    lista.push_front(7);
    
    tam = lista.size();
    lista.reverse();
    for(int i = 0; i < tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    cout << "Tamanho da lista: " << lista.size() << "\n\n";
    lista.push_front(9);
    lista.push_front(0);
    lista.push_front(5);
    lista.push_front(3);
    lista.push_front(7);
    
    tam = lista.size();
    //Organizando os valores em ordem crescente
    lista.sort();
    //Organizando os valores em ordem descrescente
    lista.reverse();
    for(int i = 0; i < tam; i++){
        cout << lista.front() << "\n";
        lista.pop_front();
    }
    return 0;
}