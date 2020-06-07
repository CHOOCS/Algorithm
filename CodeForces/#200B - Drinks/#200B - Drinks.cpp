#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    int num;
    double total = 0.0;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        total += num;
    }

    cout << setprecision(12) << fixed;
    cout << total / n << endl;
    return 0;
}
//Execution Time - 62ms
//Memory - 12KB