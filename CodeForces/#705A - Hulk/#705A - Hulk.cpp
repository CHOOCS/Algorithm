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

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << "I hate ";
        }
        else {
            cout << "I love ";
        }

        if (i != n) {
            cout << "that ";
        }
        else {
            cout << "it ";
        }
    }

    return 0;
}
//Execution Time - 31ms
//Memory - 16KB