/* roundit.c: rounds up the real number entered */
#include <stdio.h>

int main() {
	float myRealNumber;
	int myIntNumber;
	printf("Enter a real number: ");
	fflush(stdout);
	
	scanf("%f", &myRealNumber);
	printf("You entered: %f\n", myRealNumber);
	
	myIntNumber = (int)(myRealNumber + 0.5);
	printf("Rounded to closest integer: %d\n", myIntNumber);	
	return 0;
}
