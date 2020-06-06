#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int a;
    int count = 0;
    cin >> a;

    while (a > 0) {
        if (a >= 5) {
            a = a - 5;
            count++;
        }else if(a >= 4){
            a = a - 4;
            count++;
        }
        else if (a >= 3) {
            a = a - 3;
            count++;
        }
        else if (a >= 2) {
            a = a - 2;
            count++;
        }
        else {
            a = a - 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

//Execution Time - 46ms
//Memory - 8KB