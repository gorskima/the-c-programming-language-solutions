#include <stdio.h>
#include <stdlib.h>

#define MIN_LENGTH 80
#define MAX_LENGTH 1000 // last byte is used for the '\0' character, thus will not be printed

int read_line(char buf[]);

int main() {
	char buf[MAX_LENGTH];
	int line_length;
	
	while ((line_length = read_line(buf)) > 0) {
		if (line_length > MIN_LENGTH) {
			printf("%s\n", buf);
		}
	}
	
	return EXIT_SUCCESS;
}

int read_line(char buf[]) {
	int ch, pos = 0, counter = 0;
	
	while ((ch = getchar()) != '\n') {
		if (pos < MAX_LENGTH - 1) {
			buf[pos++] = ch;
		}
		counter++;
	}
	buf[pos] = '\0';
	
	return counter;
}

