#include <stdio.h>

void squeeze(char s1[], char s2[]) {
	int i,j,k ;
	int found ;

	for (i=j=0; s1[i] != '\0'; ++i) {
		found = 1;
		for (k = 0 ; s2[k] != '\0'; ++k) {
			if (s1[i] == s2[k]) {
				found = 0;
				break;
			}
		}
		if ( found ) {
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}

int main() {
	char s1[] = "abcdef";
	char s2[] = "ad";

	squeeze(s1,s2);
	printf("%s\n", s1);

	return 0;
}