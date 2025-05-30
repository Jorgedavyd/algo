#include <iostream>
using namespace std;

int main() {
    long long value;
    cin >> value;
    auto out = (value != 2) && (value % 2 == 0) ? "YES" : "NO";
    cout << out << endl;
}
