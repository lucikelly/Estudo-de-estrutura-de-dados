#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> lista;
    int tam = 5;
    for(int i = 0; i < 5; i++){
        lista.push_front(i);
    }
    
    cout << "Tamanho da lista: " << lista.size() << "\n";
    tam = lista.size();
    for(int i = 0; i < tam; i++){
        cout << "Elemento: " << lista.front() << "\n";
        lista.pop_front();
    }
    
    return 0;
}