#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 16 // last byte is used for the '\0' character, thus will not be printed

int read_line(char buf[]);
void copy(char to[], char from[]);

int main() {
	char buf[MAX_LINE], max_line[MAX_LINE];
	int line_length, max_length = 0;
	
	while ((line_length = read_line(buf)) > 0) {
		if (line_length > max_length) {
			copy(max_line, buf);
			max_length = line_length;
		}
	}

	printf("Longest line (%d): %s\n", max_length, max_line);
	
	return EXIT_SUCCESS;
}

int read_line(char buf[]) {
	int ch, pos = 0, counter = 0;
	
	while ((ch = getchar()) != '\n') {
		if (pos < MAX_LINE - 1) {
			buf[pos++] = ch;
		}
		counter++;
	}
	buf[pos] = '\0';
	
	return counter;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
