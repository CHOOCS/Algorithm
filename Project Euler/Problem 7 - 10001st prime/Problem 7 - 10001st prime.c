#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void prime_numbers(void);

int main() {
	
	prime_numbers();
	system("pause");
}

void prime_numbers(void)
{
	int c, i, count, n;
	i = 3;
	n = 10001;

	printf("1 - 2\n");

	for (count = 2; count <= n;) {
		for (c = 2; c <= i - 1; c++) {
			if (i % c == 0) {
				break;
			}
		}

		if (c == i) {
			printf("%d - %d\n", count, i);
			count++;
		}

		i++;
	}
}
