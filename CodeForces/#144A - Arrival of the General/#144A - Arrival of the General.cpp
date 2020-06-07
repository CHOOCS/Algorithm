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
    
    int n;
    cin >> n;
    int m = 0,l = 100;
    int crntMax = 0,crntLow = 0,pas;
    int num[100];

    for (int i = 0; i < n; i++) {
        cin >> num[i];

        if (num[i] > m) {
            m = num[i];
            crntMax = i;
        }

        if (num[i] <= l) {
            l = num[i];
            crntLow = i;
        }
    }

    pas = crntMax + (n - crntLow - 1);

    if (crntMax > crntLow) {
        pas--;
    }

    cout << pas << endl;

    return 0;
}
//Execution Time - 62ms
//Memory - 4KB