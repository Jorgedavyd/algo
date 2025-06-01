#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (vec[j - 1] > vec[j]) {
                swap(vec[j - 1], vec[j]);
                continue;
            };
            break;
        }
    };
};

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto& it: in) cin >> it;
    insertion_sort(in);
    for (auto x : in) cout << x << " ";
    cout << endl;
    return 0;
}
