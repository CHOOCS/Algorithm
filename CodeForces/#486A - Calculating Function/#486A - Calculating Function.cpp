#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    
    long long int num;
    long long int ans = 0;
    cin >> num;
    
    if (num % 2 == 0) {
        ans = num / 2;
    }
    else {
        ans = (-1 * num) + ((num - 1) / 2);
    }

    cout << ans << endl;
    return 0;
}
//Execution Time - 31ms
//Memory - 16KB