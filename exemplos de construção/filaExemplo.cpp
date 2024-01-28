#include <iostream>
#include <queue>

using namespace std;
// metódos de fila: empty, size, front, back, push.
int main () {
    queue <string> elemento;
    
    elemento.push("primeiro elemento"); // metodo push inserir o elemento na fila
    elemento.push("segundo elemento");
    elemento.push("terceiro elemento");
    elemento.push("quarto elemento");
    
    cout << "Tamanho da fila: " << elemento.size() << "\n";// metodo size pra ver o 
								tamanho da fila
    
    cout << "primeiro da fila: " << elemento.front() << "\n"; // metodo front mostra quem 
                                                                   tá na frente da fila
    
    cout << "último da fila: " << elemento.back() << "\n"; // metodo back mostra quem 
								tá em último na fila
    
    
    // pra demonstrar todo os elementos da fila com while
   while(!elemento.empty()){ // enquanto os elementos não estiverem vazios, faça 
				(metodo empty é uma comparação).
        cout << elemento.front() << "\n"; 
        elemento.pop(); // pra remover o elemento
    }
   return 0; 
}
