#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>


using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    
    int a, b, c, d;
    int y;
    cin >> y;

    while (true) {
        y++;
        a = y % 10;
        b = (y / 10) % 10;
        c = (y / 100) % 10;
        d = (y / 1000) % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
//Execution Time - 62ms
//Memory - 8KB