#include <stdio.h>
#include <stdlib.h>

int main() {
	int blanks = 0, tabs = 0, newlines = 0;

	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			blanks++;
		} else if (c == '\t') {
			tabs++;
		} else if (c == '\n') {
			newlines++;
		}
	}

	printf("%d blanks, %d tabs, %d new lines\n", blanks, tabs, newlines);

	return EXIT_SUCCESS;
}
