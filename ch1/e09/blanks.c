#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main() {
	int previous_was_blank = TRUE;
	
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!previous_was_blank) {
				putchar(c);
				previous_was_blank = TRUE;
			} 
		} else {
			putchar(c);
			previous_was_blank = FALSE;
		}
	}

	return EXIT_SUCCESS;
}
