#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>

using namespace std;

int main() {
    long long int n, m, a;
    cin >> n >> m >> a;

    cout << ((n+a-1)/a) * ((m+a-1)/a)  << endl;


    return 0;
}

//Execution Time - 31ms
//Memory - 8KB