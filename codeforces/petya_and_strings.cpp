#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int cnt1 = 0, cnt2 = 0;
    for (auto i = 0; i < n; i++) {
        cnt1 += (int) toupper((char)a[i]);
        cnt2 += (int) toupper((char)b[i]);
    };
    string out;
    if (cnt1 < cnt2) {
        out = "-1";
    } else if (cnt1 == cnt2) {
        out = "0";
    } else {
        out = "1";
    }
    cout << out << endl;
}
