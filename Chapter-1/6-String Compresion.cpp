#include <bits/stdc++.h>

using namespace std;

int main() {
    string sWord, sConcatenate;
    int iCounter = 1;
    getline(cin, sWord);

    for (int i = 1; i <= sWord.size(); i++) {
        char cPrev = sWord[i-1];
        if (cPrev == sWord[i]) {
            iCounter++;
        }
        else {
            sConcatenate += cPrev;
            sConcatenate += to_string(iCounter);
            iCounter = 1;
        }
    }

    if (sConcatenate.size() < sWord.size()) {
        cout << sConcatenate << endl;
    }
    else {
        cout << sWord << endl;
    }
    return 0;
}