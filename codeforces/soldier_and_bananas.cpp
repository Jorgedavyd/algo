#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    auto price = k*(w)*(w+1)/2;
    auto output = price - n;
    if (output < 0) {
        cout << 0 << endl;
    } else {
        cout << output << endl;
    }
}
