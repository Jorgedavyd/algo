#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        auto value = a + b + c;
        if (value >= 2) {
            cnt += 1;
        };
    }
    cout << cnt << endl;
}
