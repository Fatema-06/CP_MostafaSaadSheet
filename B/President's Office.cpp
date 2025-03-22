#include <iostream>
using namespace std;

int main() {
    int n, m;
    char c;
    cin >> n >> m >> c;
    
    char office[100][100]; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> office[i][j];
        }
    }

    int count = 0;
    bool mark[256] = {false}; // 256 to cover all possible char values
    for (char i = 'A'; i <= 'Z'; ++i)
        mark[i] = false;

    mark[c] = true; // Mark the President's desk color
    mark['.'] = true; // Mark empty spaces as visited

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (office[i][j] == c) {
                if (j + 1 < m && !mark[office[i][j + 1]]) {
                    count++;
                    mark[office[i][j + 1]] = true;
                }
                if (j - 1 >= 0 && !mark[office[i][j - 1]]) {
                    count++;
                    mark[office[i][j - 1]] = true;
                }
                if (i + 1 < n && !mark[office[i + 1][j]]) {
                    count++;
                    mark[office[i + 1][j]] = true;
                }
                if (i - 1 >= 0 && !mark[office[i - 1][j]]) {
                    count++;
                    mark[office[i - 1][j]] = true;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
