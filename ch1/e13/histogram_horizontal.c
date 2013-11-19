#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 128

int main() {
	int word_sizes[MAX_WORD_LENGTH], i;

	// fill array with zeros
	for (i = 0; i < MAX_WORD_LENGTH; i++) {
		word_sizes[i] = 0;
	}

	// read words
	int c, length = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (length > 0) {
				word_sizes[length]++;
				length = 0;
			}
		} else {
			length++;
		}
	}

	// print histogram
	for (i = 0; i < MAX_WORD_LENGTH; i++) {
		int n = word_sizes[i];

		if (n > 0) {
			printf("Words with size %d: ", i);

			int j;
			for (j = 0; j < n; j++) {
				printf("=");
			}

			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}
