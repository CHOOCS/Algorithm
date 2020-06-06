#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int num, n;
    cin >> num >> n;

    while (n--) {
        if (num % 10 == 0) {
            num = num/10;
        }
        else {
            num = num - 1;
        }
    }

    cout << num << endl;
    return 0;
}

//Execution Time - 15ms
//Memory - 4KB