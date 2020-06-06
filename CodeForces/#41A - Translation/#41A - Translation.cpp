#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    string code;
    string rCode;
    cin >> code >> rCode;
    
    reverse(code.begin(), code.end());

    if (code == rCode) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

//Time Execution - 62ms
//Memory - 256KB