#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main (){

    list<int>num={1,2,3,4,5,6,7,8,9,10};

    auto it=find(num.begin(),num.end(),6); //Pesquisa o elemento 6 e "retorna" para o iterator

    cout << *it << endl;

  return 0;
}