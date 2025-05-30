#include <cassert>
#include <iostream>

using namespace std;

int main() {
    string ops;
    int cgs;
    cgs = 1;
    cin >> ops;
    // a+b+... (string length: 2n + 1)
    auto len = ops.length();
    assert(ops.length() % 2 == 1);
    if (len > 1) {
        while (cgs > 0) {
            cgs = 0;
            for (int i = 0; i < len - 2; i+=2) {
                char* left = &ops[i];
                char* right = &ops[i + 2];
                if (*left > *right) {
                    swap(*left, *right);
                    cgs += 1;
                }
            }
        }
    }
    cout << ops << endl;
}
