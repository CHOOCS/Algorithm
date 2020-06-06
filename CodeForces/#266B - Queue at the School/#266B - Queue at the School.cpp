#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int n;
    int sec;
    string s;

    cin >> n >> sec >> s;
    
    for (int i = 0; i < sec; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }

    cout << s << endl;
    return 0;
}

//Execution Time - 62ms
//Memory - 256KB