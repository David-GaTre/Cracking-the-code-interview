#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "PROBLEMA 4: PALINDROME PERMUTATION" << endl;

    string sWord;
    int iArray[256] = {0}, iOnes = 0;

    cout << "Inserte palabra" << endl;
    getline(cin, sWord);

    for (int i = 0; i < sWord.length(); i++) {
        iArray[sWord[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (i != 32 && (iArray[i] % 2 != 0)) {
            iOnes++;
            if (iOnes > 1) {
                break;
            }
        }
    }

    if (iOnes > 1) {
        cout << "No hay permutaciones palindromas" << endl;
    }
    else {
        cout << "Si hay permutaciones palindromas" << endl;
    }


    return 0;
}