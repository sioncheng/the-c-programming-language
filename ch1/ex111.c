#include <stdio.h>

int main() {
	int c, prev;

	c = prev = 0;
	
	while ( (c = getchar()) != EOF ) {
		if ( c == ' ' && prev == ' ') {
			continue;	
		}

		prev = c;
		if (c == ' ')
			putchar('\n');
		else
			putchar(c);

	}

	return 0;
}