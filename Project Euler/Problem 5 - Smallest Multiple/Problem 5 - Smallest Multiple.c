#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main() {

	long long int i, j, a;

	for (i = 1; i < 9999999999999; i++) {
		a = 0;

		for (j = 1; j < 21; j++) {
			if (i % j != 0) {
				a = 1;
				break;
			}
		}

		if (a == 0) {
			printf("%d", i);
		}
	}




	system("pause");
}


