#include <cassert>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b;
    assert(a <= b);
    n = 0;
    while (a <= b) {
        n++; a *= 3; b *= 2;
    }
    cout << n << endl;
}
