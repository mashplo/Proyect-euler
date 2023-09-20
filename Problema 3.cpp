#include <iostream>
using namespace std;
int main() {
  long long n = 600851475143;
  int resultado;

  for (long long i = 2; i <= n; i++){
    if (n % i == 0){
      resultado = i;
      long long contador = 0;
      for (long long g = 1; g <= resultado; g++){
        if (resultado % g == 0){
          contador += 1; 
        }
      }
      if (contador < 3){
        cout << resultado << endl;
      }
    }
  }
  return 0;
}
  