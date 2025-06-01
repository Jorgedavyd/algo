#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void merge_sort(vector<int>& vec) {

};

int main() {
    int n;
    cin >> n;
    vector<int> in(n);
    for (auto& it: in) cin >> it;
    merge_sort(in);
    for (auto it: in) cout << it << " ";
    cout << endl;
    return 0;
}
