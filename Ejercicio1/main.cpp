#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> miVector;

    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);
    miVector.push_back(50);
    cout << "Elementos del vector: " << endl;
 for(std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << std::endl;
}
    return 0;
}
