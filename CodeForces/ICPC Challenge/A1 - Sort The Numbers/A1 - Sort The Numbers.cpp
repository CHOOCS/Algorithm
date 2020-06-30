#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>
using namespace std;


int main() {
    std::ios::sync_with_stdio(false);
    ifstream inFile;
    ofstream outFile;
    inFile.open("sort.in");
    outFile.open("output.txt");

    int x;
    vector<int> num;
    int temp;

    if (!inFile) {
        cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }

    inFile >> x;

    for (int i = 0; i < 300000; i++) {
        inFile >> temp;
        num.push_back(temp);
    }

    sort(num.begin(), num.end());

    for (int i : num) {
        outFile << i << "\n";
        
    }

    
    
    return 0;
 }