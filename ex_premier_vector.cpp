#include <iostream>
using namespace std;

bool premier(int x) {
    bool ret = true;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) 
            ret = false;
    }
    return ret;
}

int main() {
    int n;
    cout << "Veuillez entrer un nombre entier pour vérifier s'il est premier : ";
    cin >> n;
    
    if (premier(n)) {
        cout << "Félicitations ! Le nombre " << n << " est un nombre premier." << endl;
    } else {
        cout << "Désolé, le nombre " << n << " n'est pas un nombre premier." << endl;
    }

    return 0;
}
