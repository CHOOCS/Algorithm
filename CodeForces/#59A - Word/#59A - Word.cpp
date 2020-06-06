#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>


using namespace std;

int main() {
    string word;
    cin >> word;
    int len = word.length();
    int lCase = 0, uCase = 0;

    for (int i = 0; i < len; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            uCase++;
        }
        else {
            lCase++;
        }
    }

    if (uCase > lCase) {
        for (int i = 0; i < len; i++) {
            word[i] = toupper(word[i]);
        }
    }
    else {
        for (int i = 0; i < len; i++) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;

    return 0;
}
//Execution Time - 62ms
//Memory - 260KB