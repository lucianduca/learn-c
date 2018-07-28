/* limits.c: Illustrates integral limits */
#include <stdio.h>
#include <limits.h>

int main() {
	printf("\tchar: \t[%d, %d]\n", CHAR_MIN, CHAR_MAX);
	printf("\tshort: \t[%d, %d]\n", SHRT_MIN, SHRT_MAX);
	printf("\tint: \t[%d, %d]\n", INT_MIN, INT_MAX);
	printf("\tlong: \t[%ld, %ld]\n", LONG_MIN, LONG_MAX);
	
	return 0;
}
