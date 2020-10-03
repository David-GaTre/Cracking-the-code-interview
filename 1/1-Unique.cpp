#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string sWord;
    int iSize = 0;
    map<char, bool> mStored;

    getline(cin, sWord);
    map<char, bool>::iterator itr;

    for (int i = 0; i < sWord.size(); i++) {
        mStored.insert(pair<char, bool>(sWord[i], true));
        iSize++;
        if (iSize != mStored.size())
            break;
    }

    if (iSize == sWord.size()) {
        cout << "Todos los caracteres son unicos" << endl;
    }
    else {
        cout << "No todos son unicos" << endl;
    }
    return 0;
}