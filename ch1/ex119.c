#include <stdio.h>

#define MAX 100

void reverse_str(char str[], int len, char newstr[]);

int main(){
	char line[MAX];
	char newline[MAX];
	char c;

	int i = 0;
	while ( i <= MAX && (c = getchar()) != EOF ) {
		line[i] = c;
		if (c == '\n') {
			reverse_str(line, i, newline);
			printf("%s\n",newline);
			i = 0;
		} else {
			++i;
		}
	}

	return 0;
}

void reverse_str(char str[], int len, char newstr[]){
	for (int j = 0 ; j < len; ++j) {
		newstr[j] = str[len-1-j];
	}
	newstr[len] = '\0';
}