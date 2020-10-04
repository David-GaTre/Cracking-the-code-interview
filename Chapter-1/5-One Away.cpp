#include <bits/stdc++.h>

using namespace std;

bool checkReplace(int iA[256], int iB[256]) {
    int iTimes = 0;

    for (int i = 0; i < 256; i++) {
        if (iA[i] != iB[i]) {
            if (iTimes == 2) {
                return false;
            }
            iTimes++;
        }
    }
    return true;
}

bool checks(string sW1, string sW2) {
    bool bReplace = false, bCheck = false;
    int iA[256] = {0}, iB[256] = {0}, iCheck = 0;

    for (int i = 0; i < sW1.length(); i++) {
        iA[sW1[i]]++;
    }
    for (int i = 0; i < sW2.length(); i++) {
        iB[sW2[i]]++;
    }
    
    if (sW1.length() == sW2.length())
        bReplace = checkReplace(iA, iB);
    
    int Size1 = sW1.length(), Size2 = sW2.length();
    int iSizes = abs(Size1 - Size2);

    if (iSizes == 1) {
        for (int i = 0; i < 256; i++) {
            if (iA[i] != iB[i]) {
                if (bCheck) {
                    bCheck = false;
                    break;
                }
                bCheck = true;
            }
        }
    }

    return (bCheck || bReplace);
}

int main() {
    cout << "PROBLEMA 5: ONE AWAY" << endl;
    
    string sW1, sW2;
    cout << "Inserte la primera palabra" << endl;
    cin >> sW1;
    cout << "Inserte la segunda palabra" << endl;
    cin >> sW2;

    if ((sW1 == sW2) || checks(sW1,sW2)) {
        cout << "Si es una operacion" << endl;
    }
    else {
        cout << "No es una operacion" << endl;
    }

    return 0;
}