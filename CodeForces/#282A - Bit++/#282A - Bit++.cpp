#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	int a = 0;
	string x;
 
	cin >> n;
 
	for (int i = 0; i < n; i++) {
		cin >> x;
 
		if (x == "++X" || x == "X++") {
			a++;
		}
		else {
			a--;
		}
	}
 
	cout << a << endl;
 
 
	return 0;
}

//Execution Time - 46ms
//Memory - 260KB