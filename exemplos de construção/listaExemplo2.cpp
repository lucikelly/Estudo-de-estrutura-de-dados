#include <iostream>
#include <list>

using namespace std;

int main (){
     
    list<int> exemplo, exe2; 
    list<int>::iterator it;  
    int tamanhoList;
    
    exe2.push_front(9);
    exe2.push_front(9);
    exe2.push_front(9);
    exe2.push_front(9);
    
    
    
    tamanhoList = 10;
    for (int i = 0; i < tamanhoList; i++ ) {//preencher a lista 
        exemplo.push_front(i);
    }
    
    it = exemplo.begin();
    advance(--it, 3); // se for colocado o -- ele vai exatamente na posiçao 3, se não ele fica na 4
    exemplo.insert(it, 0);
    exemplo.erase(--it); // sempre coloca o -- porque se não ele come uma posição a frente da casa que ta it
    
    //exemplo.clear(); limpa a lista completa
    
    exemplo.merge(exe2); //tira os elementos da lista exe2 e coloca me exemplo
    
    
    cout <<"Tamanho da lista: "<< exemplo.size() << "\n\n";
    tamanhoList = exemplo.size();
    for (int i = 0; i < tamanhoList; i++ ) {//preencher a lista 
        cout << exemplo.front() << " ";
        exemplo.pop_front();
    }
    return 0;
}