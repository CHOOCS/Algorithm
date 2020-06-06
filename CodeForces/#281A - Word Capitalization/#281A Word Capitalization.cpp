#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    string s;

    cin >> s;

    s[0] = toupper(s[0]);

    cout << s << endl;

    return 0;
    
}

//Time Execution - 62ms
//Memory - 4KB