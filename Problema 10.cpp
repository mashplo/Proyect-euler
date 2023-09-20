#include <iostream>
using namespace std;

int main() {
    int n = 2000000; 
    long long suma = 0; 

    for(int h = 2; h <= n; h++) {
        bool primo = true;

        for (int i = 2; i * i <= h; i++) {
            if (h % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            suma += h;
        }
    }

    cout << "La suma de los números primos hasta " << n << " es: " << suma << endl;
    return 0;
}
