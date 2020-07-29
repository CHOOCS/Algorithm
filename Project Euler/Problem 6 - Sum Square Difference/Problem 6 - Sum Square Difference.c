#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void difference(void);
void solution(void);

int main() {
	
	//difference();
	solution();
	system("pause");
}

//my solution
void difference(void) {
	int numbers;
	int i;
	int square_numbers = 0;
	int total = 0;
	int differences;

	for (i = 1; i < 101; i++) {
		square_numbers += pow(i, 2);
		total += i;
	}

	differences = pow(total,2) - square_numbers;

	printf("%d\n", differences);
}

//Official Solution
void solution(void) {
	int limit = 100;
	int sum;
	int sumSquare;

	sum = limit * (limit + 1) / 2;
	sumSquare = ((2 * limit) + 1)* (limit + 1)* limit / 6;

	printf("%d\n", pow(sum, 2) - sumSquare);

}