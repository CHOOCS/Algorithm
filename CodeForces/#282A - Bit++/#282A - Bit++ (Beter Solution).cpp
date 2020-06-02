#include <iostream>
 
using namespace std;
 
int main() {
	int n;
	int a = 0;
	string x;
 
	cin >> n;
	
	while (n--) {
		cin >> x;
		if (x[1] == '+') {
			a++;
		}
		else {
			a--;
		}
 
	}
 
	cout << a << endl;
 
 
	return 0;
}

//Execution Time - 31ms
//Memory - 12KB