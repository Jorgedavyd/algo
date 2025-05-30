#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int m = 5, n = 5;
    int value;
    int i, j;
    for (auto i = 1; i <= m; i++) {
        for (auto j = 1; j <= m; j++) {
            cin >> value;
            if (value == 1) {
                cout << abs(3 - i) + abs(3 - j) << endl;
            }
        }
    }
}
