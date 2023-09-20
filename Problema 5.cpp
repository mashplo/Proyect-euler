#include <iostream>
using namespace std;

int main() {
    long long contador = 0;
    for (long long i = 20; true; i += 20) {
        contador = 0;
        for (int j = 1; j <= 20; j++) {
            if (i % j == 0) {
                contador += 1;
            }
            else{
                break;
            }
        }
        if (contador == 20) {
            cout << "El número es: " << i << endl;
            break;
        }
    }
    return 0;
}