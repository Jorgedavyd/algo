#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n - 1; j++) {
            if (vec[min_idx] > vec[j + 1]) min_idx = j + 1;
        };
        swap(vec[i], vec[min_idx]);
    };
};

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto& it: in) cin >> it;
    selection_sort(in);
    for (auto x : in) cout << x << " ";
    cout << endl;
    return 0;
}
