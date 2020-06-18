#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>

using namespace std;

int main() {
    const int N = 51;
    int a[N][N];
    int m, n;
    int mn;
    int t;

    cin >> t;

    while (t--) {
        cin >> n >> m;
        set<int> r, c;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        mn = min(n - r.size(), m - c.size());
        if (mn % 2 != 0) {
            cout << "Ashish" << endl;
        }
        else {
            cout << "Vivek" << endl;
        }
    }
    return 0;
}
//Time Execution - 93ms
//Memory - 156KB