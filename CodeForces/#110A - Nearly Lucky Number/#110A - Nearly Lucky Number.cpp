#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int pass = 0;
    long long int num;

    cin >> num;
    while (num > 0) {
        
        if (num % 10 == 7 || num % 10 == 4) {
            pass++;
        }

        num = num / 10;
    }

    cout << pass << endl;

    if (pass == 7 || pass == 4) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    

    return 0;
}
//Time Execution - 62ms
//Memory - 8KB