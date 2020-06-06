#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int n;
    int count = 0;
    string RGB;
    cin >> n;
    cin >> RGB;

    for (int i = 1; i < RGB.length(); i++) {
        if (RGB[i] == RGB[i - 1]) {
            count++;
       }
    }

    cout << count << endl;


    return 0;
    
}

//Execution Time - 62ms
//Memory - 12KB