#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>


using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    string s;
    
    int a = 0, d = 0;
    cin >> n;
    cin >> s;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            a++;
        }
        else {
            d++;
        }
    }


    if (a == d) {
        cout << "Friendship" << endl;
    }else if (a > d) {
        cout << "Anton" << endl;
    }else {
        cout << "Danik" << endl;
    }

    return 0;
}

//Execution Time - 31ms
//Memory - 272KB