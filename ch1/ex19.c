#include <stdio.h>

int main() {
	int c, prev;

	c = prev = 0 ;
	
	while ( (c = getchar()) != EOF ) {
		if ( c == ' ' && prev == ' ')
			continue;	

		prev = c;
		putchar(c);
	}

	return 0;
}