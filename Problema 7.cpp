#include <iostream>
using namespace std;
bool esPrimo(int64_t numero) {
    if (numero < 2) {
        return false;
    }
    for (int64_t i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int contador = 0;
    int resultado;
    for (int64_t i = 1; true; i++) {
        if (esPrimo(i)) {
            contador++;
        }
        if (contador >= 10001) {
            resultado = i;
            break;
        }
    }
    cout << "El número primo en la posición 10001 es: " << resultado << endl;
    return 0;
}
