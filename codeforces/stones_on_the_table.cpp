#include <iostream>
using namespace std;
int main() {
    int n, cnt;
    cnt = 0;
    string row;
    cin >> n >> row;
    for (auto i = 0; i < row.length() - 1; i++) {
        char val1 = row[i];
        char val2 = row[i + 1];
        if (val1 == val2) { cnt++; }
    }
    cout << cnt << endl;
}
