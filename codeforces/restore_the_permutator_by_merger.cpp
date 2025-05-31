#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> n;
        vector<int> hst(n);
        for (int i = 0; i<n; i++) {
            int it;
            while (true) {
                bool ind = true;
                cin >> it;
                for (int j = 0; j<i; j++) {
                    if (hst[j] == it) {
                        ind = false;
                        break;
                    }
                }
                if (ind) {
                    hst[i] = it;
                    cout << it << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
}
