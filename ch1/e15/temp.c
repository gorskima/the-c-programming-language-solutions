#include <stdio.h>
#include <stdlib.h>

float toCelsius(float fahrenheit);

int main() {
	int lower = 0, upper = 300, step = 20;

	printf("  F      C\n");
	printf("----------\n");	

	float temp;
	for (temp = lower; temp <= upper; temp += step) {
		printf("%3.0f %6.1f\n", temp, toCelsius(temp));
	}

	return EXIT_SUCCESS;
}

float toCelsius(float fahrenheit) {
	return (5.0 / 9.0) * (fahrenheit - 32.0);
}
