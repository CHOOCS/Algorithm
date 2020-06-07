#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int num;
    int easy = 0, hard = 0;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1) {
            hard++;
        }
        else {
            easy++;
        }
    }

    if (hard >= 1) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }

    return 0;
}

//Execution Time - 31ms
//Memory - 20KB