#include <iostream>
using namespace std;
int main() {
  int suma(0);
  for (int i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      suma = i + suma;
    }
  }
  cout << suma;
  return 0;
}
