#include <stdio.h>
#include <stdlib.h>

#define ASCII_SPACE 32
#define SIZE 128

int main() {
	int chars[SIZE], i;

	// fill array with zeros
	for (i = 0; i < SIZE; i++) {
		chars[i] = 0;
	}

	// read characters
	int c;
	while ((c = getchar()) != EOF) {
		chars[c]++;
	}

	// print histogram (only printable chars)
	for (i = ASCII_SPACE; i < SIZE; i++) {
		int n = chars[i];

		if (n > 0) {
			printf("%c: ", i);

			int j;
			for (j = 0; j < n; j++) {
				printf("=");
			}

			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}

