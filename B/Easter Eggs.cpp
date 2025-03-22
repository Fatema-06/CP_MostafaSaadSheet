#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string base = "ROYGBIV";
    string result = "";

    // Append "ROYGBIV" fully at least once
    result += base;

    // Append remaining colors using the pattern "GBIV"
    for (int i = 7; i < n; ++i) {
        result += base[(i - 7) % 4 + 3];  // Start from 'G' (index 3) and cycle through "GBIV"
    }

    cout << result.substr(0, n) << endl;

    return 0;
}
