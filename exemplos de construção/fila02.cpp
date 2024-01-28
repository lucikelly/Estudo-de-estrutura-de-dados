#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> fila_01, fila_02;
    fila_02.push(10);
    fila_02.push(20);
    fila_02.push(30);
    fila_02.push(40);
    fila_02.push(50);
    
    cout << "Tamanho da fila 01: " << fila_01.size() << "\n";
    cout << "Tamanho da fila 02: " << fila_02.size() << "\n";
    
    fila_02.swap(fila_01);
    
    cout << "Tamanho da fila 01: " << fila_01.size() << "\n";
    cout << "Tamanho da fila 02: " << fila_02.size() << "\n";
    
    while(!fila_01.empty()){
        cout << "Imprimindo elemento: " << fila_01.front() << "\n";
        fila_01.pop();
    }
    return 0;
}