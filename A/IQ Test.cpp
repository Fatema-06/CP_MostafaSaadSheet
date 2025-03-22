#include <iostream>
using namespace std;

int main() {
    char grid[4][4];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> grid[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int countDot = 0;
            int countHash = 0;
            for (int x = i; x < i+2; x++) {
                for (int y = j; y < j+2; y++) {
                    if (grid[x][y] == '.') countDot++;
                    else countHash++;
                }
            }
            if (countDot == 4 || countHash == 4 || countDot == 3 || countHash == 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
