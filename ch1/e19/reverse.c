#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000 // last byte is used for the '\0' character, thus will not be printed

int read_line(char buf[]);
void reverse(char to[], char from[], int len);

int main() {
	char buf[MAX_LENGTH], buf2[MAX_LENGTH];
	int line_length;
	
	while ((line_length = read_line(buf)) > 0) {
		reverse(buf2, buf, line_length);
		printf("%s\n", buf2);
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

void reverse(char to[], char from[], int len) {
	int i;
	for (i = 0; i < len; i++) {
		to[len - i - 1] = from[i];
	}
	to[len] = '\0';
}
