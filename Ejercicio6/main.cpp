#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

int main() {
    string s;
    cout << "Ingresa una cadena de caracteres: ";
    cin >> s;

    try {
        int i = lexical_cast<int>(s);
        cout << "Número: " << i << endl;
    } catch(bad_lexical_cast &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
