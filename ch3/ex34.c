#include <stdio.h>

void reverse(char s[]) {
	char tmp[100];
	char c;
	int i,j;
	for(i=0; ((c = s[i]) != '\0'); i++){
		tmp[i] = s[i];
	}
	i -= 1;
	for(j=0; j <= i; j++) {
		s[j] = tmp[i-j];
	}
	s[i+1] = '\0';
}

void itoa(int n, char s[]) {
	int i = 0;
	long m = n;

	if (n < 0) {
		m = -1 * m;
	}

	do {
		s[i++] = m % 10 + '0';
	} while (( m /= 10) > 0);

	if (n < 0) {
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}

int main() {
	char s[12];
	itoa(-2147483648, s);
	printf("%s\n", s);
	return 0;
}