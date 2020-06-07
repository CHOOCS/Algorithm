#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int n,num[100000],count = 1;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 1; i < n; i++) {
        if (num[i] != num[i - 1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
//Execution Time - 92ms
//Memory - 396KB