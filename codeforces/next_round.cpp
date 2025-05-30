#include <iostream>
using namespace std;

int main() {
    int n, k;
    int kth;
    int cnt = 0;
    cin >> n >> k;
    for (auto i = 1; i <= n; ++i) {
        int scr;
        cin >> scr;
        if (scr == 0) {
            break;
        }
        if (i > k) {
            if (scr == kth) {
                cnt += 1;
            } else {
                break;
            }
        } else if (i == k) {
            kth = scr;
            cnt += 1;
        } else {
            cnt += 1;
        }
    }
    cout << cnt << endl;
}
