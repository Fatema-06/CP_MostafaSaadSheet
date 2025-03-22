#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h [1000];

    for (int i = 0; i < n; ++i) {
        cin >> h [i];
    }

    int  max = 0;

    for (int i = 0; i < n; ++i) {
        int count = 1;

        for (int j = i - 1; j >= 0 && h [j] <= h [j + 1]; --j) {
            count++;
        }

        for (int j = i + 1; j < n && h [j] <= h [j - 1]; ++j) {
            count++;
        }

        if (count >  max) {
             max = count;
        }
    }

    cout <<  max << endl;
    return 0;
}
