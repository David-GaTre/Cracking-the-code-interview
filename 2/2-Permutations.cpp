#include <bits/stdc++.h>

using namespace std;

bool arePermutable(string s1, string s2) {
    int iArr1[256] = {0}, iArr2[256] = {0};
    for (int i = 0; i < s1.length(); i++) {
        int iTemp = s1[i];
        iArr1[iTemp]++;
        iTemp = s2[i];
        iArr2[iTemp]++;
    }

    for (int i = 0; i < 256; i++) {
        if (iArr1[i] != iArr2[i])
            return false;
    }

    return true;
}

int main() {
    string sWord1, sWord2;
    bool bPermutable = false;

    cout << "Palabra 1: ";
    getline(cin, sWord1);
    cout << "Palabra 2: ";
    getline(cin, sWord2);

    sWord1.erase(remove(sWord1.begin(), sWord1.end(), ' '), sWord1.end());
    sWord2.erase(remove(sWord2.begin(), sWord2.end(), ' '), sWord2.end());

    if (sWord1.size() != sWord2.size()) {
    }
    else {
        bPermutable = arePermutable(sWord1, sWord2);
    }

    if (bPermutable) {
        cout << "Son permutables" << endl;
    }
    else {
        cout << "No son permutables" << endl;
    }

    return 0;
}