#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "PROBLEMA 3: URLIFY" << endl;

    string sWord;
    int iOriginal, iAdded = 0;

    cout << "Inserte palabra con muchos espacios" << endl;
    getline(cin, sWord);
    cout << "Inserte cantidad de caracteres" << endl;
    cin >> iOriginal;

    for (int i = 0; i < (iOriginal + iAdded); i++) {
        while (sWord[i] == ' ') {
            sWord.erase(sWord.begin()+i);
            if (sWord[i] != ' ') {
                iAdded += 2;
                sWord.insert(i,"%20");
            }
        }
    }

    while (sWord.back() == ' ') {
        sWord.pop_back();
    }

    cout << "Palabra URL: \"" << sWord << "\"" << endl;

    return 0;
}