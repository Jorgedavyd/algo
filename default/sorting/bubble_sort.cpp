#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubble(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto& it : in) cin >> it;
    bubble(in);
    for (auto x : in) cout << x << " ";
    cout << endl;
    return 0;
}

