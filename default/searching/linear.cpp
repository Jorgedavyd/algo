#include <iostream>
#include <vector>

using namespace std;

int main() {
    // INPUT: vector size -> number to look for -> vector itself
    int n, num;
    cin >> n >> num;
    auto in = vector<int>(n);
    for (auto& it: in) cin >> it;
    // Linear search, the most basic search, just linearly look for the value within the data structure (the list)
    for (int i = 0; i < in.size(); i++) if (in[i] == num) {
        cout << "Found the number " << num << "in the place" << i << endl;
    };
}
