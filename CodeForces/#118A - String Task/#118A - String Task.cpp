#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int main() {
    std::ios::sync_with_stdio(false);
    string str, newStr;
    char vowels[6] = {'A','E','I','O','U','Y'};
    cin >> str;

    int length = str.length();

    for (int i = 0; i < length; i++) {
            if (toupper(str[i]) != 'A' && toupper(str[i]) != 'E' && toupper(str[i]) != 'I' && toupper(str[i]) != 'O' && toupper(str[i]) != 'U' && toupper(str[i]) != 'Y') {
                newStr += ".";
                newStr += tolower(str[i]);
            }
    }
    
    cout << newStr << endl;


    return 0;
 }

//Execution Time - 62ms
//Memory - 3652KB