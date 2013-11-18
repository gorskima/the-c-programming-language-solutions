#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define MAX_WORD_LENGTH 16

/*
 * I wish I could use functions here, but they come first in the next subchapter :)
 */

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
				word_sizes[length - 1]++;
				length = 0;
			}
		} else {
			length++;
		}
	}

	// find max value in word_sizes array
	int max = 0;
	for (i = 0; i < MAX_WORD_LENGTH; i++) {
		int n = word_sizes[i];
		if (n > max) {
			max = n;
		}
	}

	// print bars
	int row;
	for (row = max; row > 0; row--) {
		int j;
		for (j = 0; j < MAX_WORD_LENGTH; j++) {
			if (word_sizes[j] >= row) {
				printf("%4c", '#');
			} else {
				printf("    ");
			}
		}
		printf("\n");
	}
	
	// print labels
	for (i = 0; i < MAX_WORD_LENGTH; i++) {
		printf("%4d", i + 1);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
