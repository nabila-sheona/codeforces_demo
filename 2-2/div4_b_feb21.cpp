#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        bool isSquare = true;
        bool isTriangle = true;

        // Check for a square
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Check if it's a '1' not on the border
                if (grid[i][j] == '1' && i > 0 && j > 0 && i < n - 1 && j < n - 1) {
                    isSquare = false;
                }
                // Check if it's a '0' on the border
                if (grid[i][j] == '0' && (i == 0 || j == 0 || i == n - 1 || j == n - 1)) {
                    isSquare = false;
                }
            }
        }

        // Check for a triangle
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 1; j < n - 1; ++j) {
                // Check if it's a '0' not on the border
                if (grid[i][j] == '0' && i > 0 && j > 0 && i < n - 1 && j < n - 1) {
                    isTriangle = false;
                }
            }
        }

        if (isSquare) {
            cout << "SQUARE" << endl;
        } else if (isTriangle) {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
