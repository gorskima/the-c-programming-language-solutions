#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define DEFAULT_UNSIGNED_MIN 0

int main() {
	printf("Signed char: <%d, %d>\n", SCHAR_MIN, SCHAR_MAX);
	printf("Unsigned char: <%d, %d>\n", DEFAULT_UNSIGNED_MIN, UCHAR_MAX);

	printf("Signed short: <%d, %d>\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned short: <%d, %d>\n", DEFAULT_UNSIGNED_MIN, USHRT_MAX);

	printf("Signed int: <%d, %d>\n", INT_MIN, INT_MAX);
	printf("Unsigned int: <%d, %u>\n", DEFAULT_UNSIGNED_MIN, UINT_MAX);

	printf("Signed long: <%ld, %ld>\n", LONG_MIN, LONG_MAX);
	printf("Unsigned long: <%d, %lu>\n", DEFAULT_UNSIGNED_MIN, ULONG_MAX);

	return EXIT_SUCCESS;
}
