#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    string s;
    vector<char>S;
    cin >> s;

    for (int i = 0; i < s.length(); i+=2) {
        S.push_back(s[i]);
    }

    std::sort(S.begin(), S.end());

    for (int i = 1; i < s.length()-1; i+=2) {
        S.insert(S.begin() + i, '+');
    }
    

    for (auto x : S) {
        cout << x;
    }
   
}
