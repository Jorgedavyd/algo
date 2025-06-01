#include <iostream>
#include <vector>
using namespace std;

int binary_search(int num, int lower, int upper, const vector<int>& vec) {
    if (lower > upper) return -1;
    int mid = lower + (upper - lower) / 2;
    int value = vec[mid];
    if (value == num) {
        return mid;
    } else if (value < num) {
        return binary_search(num, mid + 1, upper, vec);
    } else {
        return binary_search(num, lower, mid - 1, vec);
    }
}

int main() {
    int n, num;
    cin >> n >> num;
    vector<int> in(n);
    for (auto& it : in) cin >> it;
    int idx = binary_search(num, 0, n - 1, in);
    cout << idx << endl;
    return 0;
}

