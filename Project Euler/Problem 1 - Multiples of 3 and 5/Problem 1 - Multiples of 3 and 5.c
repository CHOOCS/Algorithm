#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	int n;
	int i;
	int sum = 0;

	n = 1000;

	for (i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	printf("The sum of natural numbers of multiple 3 and 5 is %d\n", sum);



	system("pause");
}