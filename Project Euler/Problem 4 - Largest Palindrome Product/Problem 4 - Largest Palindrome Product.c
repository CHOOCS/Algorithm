#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


void main() {

	int num;
	int k;
	int temp;
	int a, b;
	int largest = 1;

	for (a = 1; a < 1000; a++) {
		for (b = 1; b < 1000; b++) {
			k = 0;
			num = a * b;
			temp = num;
			while (temp > 0) {
				k = k * 10;
				k = k + temp % 10;
				temp = temp / 10;
			}

			if (k == num && k > largest) {
				largest = k;
			}
		}
		
			
	}

	printf("largest palindrome number is %d\n", largest);
	
	
	

	


	system("pause");
}
