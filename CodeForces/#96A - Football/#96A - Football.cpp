#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;


int main() {

    string n;

    cin >> n;

    int len = n.length();
    int count1 = 0, count0 = 0;

    for (int i = 0; i < len; i++) {
        if (n[i] == '1') {
            count1++;
        }
        else {
            count1 = 0;
        }

        if (n[i] == '0') {
            count0++;
        }
        else {
            count0 = 0;
        }

        if (count1 == 7 || count0 == 7) {
            break;
        }
        
    }

    if (count1 == 7 || count0 == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    
    return 0;
 }