#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    int len = S.length();

    sort(S.begin(), S.end());

    for(int i = 1; i < len; i++) {
        if (S[i] != S[i - 1]) {
            count++;
        }
        else {
            continue;
        }
    }

    if ((count+1) % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
    
}

//Execution Time - 62ms
//Memory - 256KB
