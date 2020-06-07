#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    string cube;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> cube;
        if (cube == "Tetrahedron") {
            count += 4;
        }
        else if (cube == "Cube") {
            count += 6;
        }
        else if (cube == "Octahedron") {
            count += 8;
        }
        else if (cube == "Dodecahedron") {
            count += 12;
        }
        else if(cube == "Icosahedron"){
            count += 20;
        }
    }
   
    cout << count << endl;

    return 0;
}
//Execution Time - 62ms
//Memory - 12KB
