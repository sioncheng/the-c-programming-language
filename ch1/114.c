#include <stdio.h>


void init_arr(int *arr, int len){
	int i;
	for (i = 0 ; i < len; ++i)
		arr[i] = 0;
}

void print_arr(int *arr, int len, int begin){
	int i;
	for (i = 0 ; i < len; ++i)
		printf("%c\t%d\n", begin + i, arr[i]);
	printf("\n");
}

int main() {
	int c = 0 ;
	int ndigit[10];
	int nlower[26];
	int nupper[26]; 

	init_arr(ndigit, 10);
	init_arr(nlower, 26);
	init_arr(nupper, 26);

	while ( (c = getchar()) != EOF ) {
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];
		} else if (c >= 'a' && c <= 'z') {
			++nlower[c-'a'];
		} else if (c >= 'A' && c  <= 'Z'){
			++nupper[c-'A'];
		}
	}

	printf("\n");
	print_arr(ndigit, 10, '0');
	print_arr(nlower, 26, 'a');
	print_arr(nupper, 26, 'A');

	return 0;
}
