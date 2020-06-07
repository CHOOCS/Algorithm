#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    int n,h,num,count = 0;
    cin >> n >> h;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > h) {
            count += 2;
        }
        else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
//Execution Time - 31ms
//Memory - 16KB