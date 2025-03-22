#include <iostream>
#include <string>

using namespace std;

int main() {
    int weight[3] = {0, 0, 0}; // A, B, C represented as 0, 1, 2

    for (int i = 0; i < 3; ++i) {
        string result;
        cin >> result;

        if (result[1] == '>') {
            weight[result[0] - 'A']++;
        } else {
            weight[result[2] - 'A']++;
        }
    }

    // Check for a valid permutation
    if (weight[0] == weight[1] || weight[1] == weight[2] || weight[0] == weight[2]) {
        cout << "Impossible" << endl;
    } else {
        char order[3];
        for (int i = 0; i < 3; ++i) {
            order[weight[i]] = 'A' + i;
        }
        cout << order[0] << order[1] << order[2] << endl;
    }

    return 0;
}
