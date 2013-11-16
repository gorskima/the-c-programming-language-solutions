#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main() {
	int c, last_was_whitespace = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (!last_was_whitespace) {
				putchar('\n');
				last_was_whitespace = TRUE;
			}
		} else {
			putchar(c);
			last_was_whitespace = FALSE;
		}
	}

	return EXIT_SUCCESS;
}
