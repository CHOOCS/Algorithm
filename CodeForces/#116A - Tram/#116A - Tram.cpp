#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    
    int n;
    int in, out;
    int totalIn = 0, maxIn = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> out >> in;
        totalIn += in - out;
        if (totalIn > maxIn) {
            maxIn = totalIn;
        }
    }

    cout << maxIn << endl;

    return 0;
}

//Execution Time - 62ms
//Memory - 16KB
