#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int position[100000];  

    for (int i = 1; i <= n; ++i) {
        int value;
        cin >> value;
        position[value] = i;  
    }

    cin >> m;
    long long vc = 0;  
    long long pc = 0;  

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        int p = position[x];  
        vc += p;  
        pc += (n - p + 1);  
    }

    cout << vc << " " << pc << endl;

    return 0;
}
