#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100], b[100];     for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = i + 1; j < m; ++j) {
            if (b[j] > b[i]) {
                // Swap matches per box
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                
                // Swap number of boxes
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
int matches = 0;
    for (int i = 0; i < m && n > 0; ++i) {
        int boxes_to_take = min(a[i], n);
        matches += boxes_to_take * b[i];
        n -= boxes_to_take;
    }

    cout << matches << endl;

    return 0;
}