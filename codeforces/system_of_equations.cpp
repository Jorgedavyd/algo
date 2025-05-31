#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m, a, b, cnt;
    cnt = 0;
    cin >> n >> m;
    for (a = 0; a <= 999; a++) {
        for (b = 0; b <= 999; b++) {
            if ((a*a + b == n) && (b*b + a == m)) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
