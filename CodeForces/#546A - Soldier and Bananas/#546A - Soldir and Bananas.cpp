#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int cost, moneyHave, bananaWants;
    int total = 0;
    int moneyBorrow = 0;

    cin >> cost >> moneyHave >> bananaWants;

    for (int i = 1; i <= bananaWants; i++) {
        total += i * cost;
    }

    if (total > moneyHave) {
        moneyBorrow = total - moneyHave;
    }

    cout << moneyBorrow << endl;

    return 0;

}

//Execution Time - 30ms
//Memory - 8KB