#include <iostream>

using namespace  std;

int main() {
    for(int n1 = 1; n1 < 1000/3; n1++){
        for(int n2 = n1 + 1; n2 < 1000/2; n2++){
            int n3 = 1000 - n1 - n2;
            if(n1*n1 + n2*n2 == n3*n3){
                cout << "El resultado es  " << n1*n2*n3 << endl;
            }
        }
    }

    return 0;
}
