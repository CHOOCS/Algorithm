#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
    int row = 5;
    int col = 5;
    int oRow, oCol;
    int count,num;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            cin >> num;
            if (num == 1) {
                oRow = i;
                oCol = j;
            }
        }
    }

    count = abs(3 - oRow) + abs(3 - oCol);
        
    cout << count << endl;
   
}

//Execution Time - 92ms
//Memory - 260KB