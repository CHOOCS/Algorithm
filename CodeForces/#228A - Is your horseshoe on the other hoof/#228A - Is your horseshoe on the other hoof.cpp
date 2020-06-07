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
    
    int num[4];
    int count = 0;

    for (int i = 0; i < 4; i++) {
        cin >> num[i];
    }

    sort(num, num + 4);

    for (int i = 1; i < 4; i++) {
        if (num[i] == num[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
//Execution time - 62ms
//Memory - 12KB