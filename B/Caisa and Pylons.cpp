#include <iostream>
using namespace std;

int main() {
    int e= 0, d = 0, n;
    cin >> n;

    int h1, h2;
    cin >> h1; 
    d = h1;

    for (int i = 1; i < n; i++) {
        cin >> h2;  

        if (h1 >= h2) {
            e+= h1 - h2;
        } else {
            int needed_e= h2 - h1;
            if (e>= needed_e) {
                e-= needed_e;
            } else {
                d += needed_e- e;
                e= 0;
            }
        }

        h1 = h2;
    }

    cout << d << endl;

    return 0;
}
