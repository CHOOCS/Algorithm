#include <stdio.h>
#include <stdlib.h>

int primeFactor(long long x);

//To find the largest prime factor
int main() {
	long long a;
	long long i;
	i = 2;
	a = 600851475143;
	printf("The biggest factor of 600851475143 is ");
	
	while (i < a ) {
		//Find if its the factor of a
		if (a % i == 0) {
		//If it is, then divide the number
			a /= i;
		}
		else {
			i++;
		}
	}

	printf("%d\n", i);
	printf("\n");
	system("pause");
}

//To find every prime factor
int primeFactor(long long x) {
	int i, j;
	int isPrime;

	for (i = 2; i <= x; i++) {
		if (x % i == 0) {
			isPrime = 1;
			for (j = 2; j <= i / 2; j++) {
				if (i % j == 0) {
					isPrime = 0;
					break;
				}

			}
			if (isPrime == 1) {
				printf("%d ", i);
			}
		}
	}
	return 0;
}