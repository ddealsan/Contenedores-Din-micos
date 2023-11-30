#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main(){
    list<float> miLista={1.1,2.2,3.3,4.4,5.5};
    stack<float, list<float>> miPila(miLista);
    cout << "Elementos de la pila: " << endl;


}