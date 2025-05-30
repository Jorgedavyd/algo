#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    int cnt1 = 0, cnt2 = 0;
    cin >> word;

    for (char l : word) {
        if (islower(l))
            cnt1++;
        else
            cnt2++;
    }

    if (cnt1 >= cnt2) {
        for (char &l : word)
            l = tolower(l);
    } else {
        for (char &l : word)
            l = toupper(l);
    }

    cout << word << endl;
}

