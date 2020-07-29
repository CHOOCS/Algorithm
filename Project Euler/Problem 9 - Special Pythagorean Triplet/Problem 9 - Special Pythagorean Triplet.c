#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void pythagorean_triplet(void);

int main() {

	pythagorean_triplet();
	system("pause");
}

void pythagorean_triplet(void)
{
	//a^2 + b^2 = c^2
	//3^2 + 4^2 = 5^2 = 25

	int a, b, c, sum, product;

	a = b = c = product = 0;
	sum = 1000;

	for (a = 1; a < (sum / 3); a++) {
		for (b = 2; b < (sum / 2); b++) {
			c = sum - b - a;

			if ((a * a) + (b * b) == (c * c) && (a+b+c) == sum) {
				product = a * b * c;
			}
		}
	}
	
	printf("The answer is %d\n", product);
	/*int a, b, c;
	int product;
	for (a = 1; a < 500; a ++) {
		for (b = 1; b < 500; b++) {
			for (c = 1; c < 500; c++) {
				if ((a * a) + (b * b) == (c * c)) {
					if (a + b + c == 1000) {
						product = a * b * c;
						
					}
				}
			}
		}
	}
	printf("The answer is %d\n", product);*/
}
