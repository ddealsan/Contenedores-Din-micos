#include <iostream>
#include <valarray>

using namespace std;
int main(){
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    valarray<double> suma = valores + 10.0;
    valarray<double> resta = valores - 2.0;
    valarray<double> multiplicacion = valores * 3.0;
    valarray<double> division = valores / 2.0;

    cout << "Valores originales: ";
    for(double valor : valores) {
        cout << valor << " ";
    }

    cout << endl;
    cout << "Suma + 10.0: ";
    for(double valor : suma) {
        cout << valor << " ";
    }
    cout << endl;

    cout << "Resta - 2.0: ";
    for(double valor : resta) {
        cout << valor << " ";
    }
    cout << endl;



}