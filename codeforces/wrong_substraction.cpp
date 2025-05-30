#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    while (k != 1) {
        if (n % 10 != 0) {
            k--; n--;
        } else {
            n /= 10;
        }
    }
    cout << n << endl;
}
