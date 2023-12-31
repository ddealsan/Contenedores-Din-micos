#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    vector<int> miVector = {50, 20, 60, 10, 30, 40};
    sort(miVector.begin(), miVector.end());
    cout << "Elementos del vector ordenados:" << std::endl;

    for(int num : miVector) {
        std::cout << num << std::endl;
    }
    int maxNum = *std::max_element(miVector.begin(), miVector.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

    return 0;
}
