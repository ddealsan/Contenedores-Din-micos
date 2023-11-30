#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

int main() {

    auto cuadrado = [](double num) { return num * num; };

    cout << "Cuadrado de 5.5: " << cuadrado(5.5) << endl;

    vector<double> numeros = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Elementos del contenedor:" << endl;
    for_each(numeros.begin(), numeros.end(), [](auto num) {
        cout << num << endl;
    });

    shared_ptr<double> ptr = make_shared<double>(10.5);
    cout << "Valor apuntado por ptr: " << *ptr << endl;

    return 0;
}