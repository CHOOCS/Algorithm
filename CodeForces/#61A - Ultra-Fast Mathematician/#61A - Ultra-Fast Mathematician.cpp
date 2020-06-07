#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    
    string num1, num2;
    cin >> num1 >> num2;
    int len = num1.length();

    for (int i = 0; i < len; i++) {
        if (num1[i] == num2[i]) {

            cout << '0';

        }else{
            cout << '1';
        }
    }
    

    return 0;
}
//Execution Time - 31ms
//Memory - 12KB