#include <bits/stdc++.h>
 
using namespace std;
void solution();
 
int main() {
 
	solution();
	
	return 0;
}
 
void solution() {
	int n, k;
	int count;
	count = 0;
	cin >> n >> k;
 
	int num[50];
 
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
 
	for (int i = 0; i < n; i++) {
		if (num[i] >= num[k - 1] && num[i] > 0) {
			count++;
		}
	}
	
	cout << count;
 
}


//Execution Time - 62ms
//Memory - 256KB