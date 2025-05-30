#include <iostream>
using namespace std;

int main() {
    int value;
    cin >> value;
    while (value--) {
        string word;
        cin >> word;
        auto middle = word.length();
        if (middle > 10) {
            cout << word[0] << middle-2 << word[--middle] << endl;
        } else {
            cout << word << endl;
        }
    }
}
