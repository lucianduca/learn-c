/* missing.c */
#include <stdio.h>
#include <limits.h>

main () {
	float x = ULONG_MAX;
	double y = ULONG_MAX;
	long double z = ULONG_MAX;
	
	printf("%f\n%f\n%Lf\n", x, y, z);
	return(0);
}
