#include <stdio.h>

int main(){
	int c, char_cntr, space_cntr, tab_cntr, newline_cntr;
	
	char_cntr = 0;
	space_cntr = 0;
	tab_cntr = 0;
	newline_cntr = 0;

	while ( (c = getchar()) != EOF ) {
		if (c == ' ') 
			++space_cntr;
		
		if (c == '\t')
			++tab_cntr;

		if (c == '\n')
			++newline_cntr;

		if ( ( c >= '0' && c <= '9') ||
			(c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z') ) 
			++char_cntr;
	}

	printf("%d %d %d %d\n", char_cntr, space_cntr, tab_cntr, newline_cntr);

	return 0;
}