#include <stdio.h>
#include <stdlib.h>

int main() {
	int result = getchar() != EOF;
	printf("For a given character expression 'getchar() != EOF' resulted in %d\n", result);

	return EXIT_SUCCESS;
}
