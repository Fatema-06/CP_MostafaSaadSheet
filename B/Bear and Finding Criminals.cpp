#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int criminals[100];
    
    // Read the number of criminals in each city
    for (int i = 0; i < n; ++i) {
        cin >> criminals[i];
    }
    
    int caught = 0;
    a--;  // Convert to zero-based index
    
    // Check criminals in Limak's city
    caught += criminals[a];
    
    // Check other cities based on distance
    for (int d = 1; d < n; ++d) {
        int left = a - d;
        int right = a + d;
        
        if (left >= 0 && right < n) {
            // Both left and right cities are within bounds
            if (criminals[left] && criminals[right]) {
                caught += 2;
            }
        } else if (left >= 0) {
            // Only left city is within bounds
            caught += criminals[left];
        } else if (right < n) {
            // Only right city is within bounds
            caught += criminals[right];
        }
    }
    
    cout << caught << endl;
    return 0;
}
