#include <string.h>
#include <stdio.h>
/* this libs is only to use funtions to randomize numbers of 'a' and 'b' */
#include <stdlib.h>
#include <time.h>

/* first declare your functions */
int	sum(int x, int y) {
	return (x + y);
}

int	prod(int x, int y) {
	return (x * y);
}

int	sub(int x, int y) {
	return (x - y);
}

int	divi(int x, int y) {
	return (x / y);
}

int	mod(int x, int y) {
	return (x % y);
}

/* this firts code is a common use of funtions in a programm. */
/* in others files in this repository will have the 'upgrade' to function pointer */
int	main(int argc, char *argv[]) {
	srand(time(NULL));
	int	a = rand() % 100;
	int	b = rand() % 100;
	printf("The result of the operation between %d and %d is %d\n", a, b, sum(a, b));
	printf("The result of the operation between %d and %d is %d\n", a, b, prod(a, b));
	printf("The result of the operation between %d and %d is %d\n", a, b, sub(a, b));
	printf("The result of the operation between %d and %d is %d\n", a, b, divi(a, b));
	printf("The result of the operation between %d and %d is %d\n", a, b, mod(a, b));
	return (0);
}
