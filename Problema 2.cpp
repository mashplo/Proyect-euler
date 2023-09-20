#include <iostream>
using namespace std;
int main() {
  int suma;
  int total = 0;
  int n1 = 0;
  int n2 = 1;
  for (int i = 1;true ; i++) {
    if(n2%2 == 0){
      total+=n2;
    }
    suma = n1;
    n1 = n2;
    n2 += suma;
    
    if(n2 > 4000000){
      break;
    }
    }
  cout << total;
  return 0;
}
  

