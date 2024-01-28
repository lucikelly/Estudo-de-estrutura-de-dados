#include <iostream>
#include <string>
#include <list>

using namespace std;

int Ex_List_Val(list<int>& lista, int ExPos);

int main() {
    list<int> numero;
    for (int i = 0; i < 10; i++) {
        numero.push_back(i);
    }

    int posicao;
    cout << "Digite a posicao que quer retirar da lista: ";
    cin >> posicao;

    int valorRemovido = Ex_List_Val(numero, posicao);
    if (valorRemovido != -1) {
        cout << "\n\nValor removido: " << valorRemovido << "\n\n";
    } else {
        cerr << "Posicao invalida!\n";
    }

    cout << "Tamanho da lista: " << numero.size() << "\n\n";
}

int Ex_List_Val(list<int>& lista, int ExPos) {
    if (lista.empty() || ExPos <= 0 || ExPos > lista.size()) {
        cerr << "Posicao invalida!\n";
        return -1;
    }

    auto it = lista.begin();
    advance(it, ExPos - 1);  // Avança o iterador para a posição desejada

    int ExNum = *it;
    lista.erase(it);

    return ExNum;
}

