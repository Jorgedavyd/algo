// zero | one
// zero \ one -> { z r }
// one \ zero -> { n }
// one & zero -> { e o }
// 3o + 4z = input.size()
// find (n)s -> find number of zeros ( number_of_z = ( input.size() - 3*(number_of_ns) ) / 4 )

#include <iostream>
using namespace std;

int main() {
    int n, cnt_n = 0, cnt_z;
    cin >> n;
    string in;
    cin >> in;
    for (auto let : in) {
        if (let == 'n') cnt_n++;
    }
    cnt_z = (in.size() - 3 * cnt_n) / 4;
    while (cnt_n--) cout << 1 << " ";
    while (cnt_z--) cout << 0 << " ";
    cout << endl;
    return 0;
}

