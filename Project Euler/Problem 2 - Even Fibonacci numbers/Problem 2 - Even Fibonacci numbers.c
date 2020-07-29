#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main() {
	 int i;
	 int n;
	 int sumOfEvenValues = 0;
	 int tempNums;
	 int t1 = 0;
	 int t2 = 1;

	n =70;

	for (i = 1; i <= n; i++) {
		if (t1 <= 4000000) {
			printf("%d\n", t1);
			tempNums = t1 + t2;
			t1 = t2;
			t2 = tempNums;


			if (t2 % 2 == 0) {
				sumOfEvenValues += t2;
				/*printf("%d\n", t2);*/
			}
		}
		
	}

	printf("\nThe sum of even Fibonacci numbers not exceed 4 millions is %d\n", sumOfEvenValues);


	system("pause");
}