#include <stdio.h>

int htoi(char hex[], int len) {
	int result = 0 ;
	int i = 0 ;
	char h;

	if (len > 2) {
		if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X')) {
			i = 2;
		}  
	}

	for (; i < len; ++i) {
		h = hex[i];
		if (h >= '0' && h <= '9') {
			result = result * 16 + (h - '0');
		} else if (h >= 'a' && h <= 'f') {
			result = result * 16 + (h - 'a' + 10);
		} else if (h >= 'A' && h <= 'F') {
			result = result * 16 + (h - 'A' + 10);
		} else {
			return -1;
		}
	}
	return result;
}

int main() {

	printf("%d\n",htoi("0xfF1",5));

	return 0;
}