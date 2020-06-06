#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int a;
    cin >> a;

    if (a % 5 == 0) {
        cout << a / 5 << endl;
    }
    else {
        cout << (a / 5) + 1 << endl;
    }

    return 0;
}

//Execution Time - 31ms
//Memory - 8KB