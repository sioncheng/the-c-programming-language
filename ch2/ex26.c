#include <stdio.h>

#define MAX 0x7FFFFFFF

//assume int32
int setbits(int x, int p, int n, int y) {
	int maskn = (1 << n) - 1;
	int yn = y & maskn;

	int t1 = (1 << (31-p-n)) - 1;
	int t2 = MAX - ((1 << (31-p)) - 1);
	
	x = x & (t1 + t2);
	x = x | yn;

	return x;
}

int main() {
	printf("%d\n", setbits(0xFF,27,2,8) );
	return 0;
}