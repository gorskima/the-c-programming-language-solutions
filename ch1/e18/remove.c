#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000 // last byte is used for the '\0' character, thus will not be printed

int read_line(char buf[]);
int remove_blanks(char to[], char from[]);
int is_whitespace(int ch);

int main() {
	char buf[MAX_LENGTH], buf2[MAX_LENGTH];
	int line_length;
	
	while ((line_length = read_line(buf)) > 0) {
		int new_length = remove_blanks(buf2, buf);
		if (new_length > 0) {
			printf("%s\n", buf2);
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

int remove_blanks(char to[], char from[]) {
	int ch, from_pos = 0, to_pos = 0;
	while ((ch = from[from_pos++]) != '\0') {
		if (!is_whitespace(ch)) {
			to[to_pos++] = ch;
		}
	}
	to[to_pos] = '\0';
	
	return to_pos;
}

int is_whitespace(int ch) {
	return ch == ' ' || ch == '\t';
}

