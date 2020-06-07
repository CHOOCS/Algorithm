#include <iostream>
#include <iomanip>
#include <algorithm>
#include <set>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int nLevel, n,levels;
    set<int>S;
    cin >> n;
    
    for (int i = 0; i < 2; i++) {
        cin >> nLevel;
        for (int j = 0; j < nLevel; j++) {
            cin >> levels;
            S.insert(levels);
        }
    }

    if (S.size() == n) {
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }


    return 0;
}
//Execution Time - 31ms
//Memory 152KB