#include <stdio.h>
#include <stdlib.h>

int main() {
	int lower = 0, upper = 300, step = 20;

	printf("  C      F\n");
	printf("----------\n");	

	float temp;
	for (temp = lower; temp <= upper; temp += step) {
		printf("%3.0f %6.1f\n", temp, (9.0 / 5.0) * temp + 32);
	}

	return EXIT_SUCCESS;
}
