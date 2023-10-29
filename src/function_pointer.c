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
/* declaring a function pointer (comment lines below to compile this code) */
//int	(*operation)(int, int) // 'int' is the return of function like functions above.
						   // '*operation' is only a generic name, like a variable.
						   // '(int, int)' is the parameters that function need to be used.
						   // just use this prototype of function pointer as a parameter 
						   // of our generic funtion (should_not_be_changed)
/* declaring a simple function */
void	should_not_be_changed(int (*operation)(int, int)) {
/* let's say that I want to use this entire code in a lib or something like that */
/* and I want only to change the operation (prod,sum...(a, b)), */
/* I can simply use a function pointer to change this function. */
srand(time(NULL));
int	a = rand() % 100;
int	b = rand() % 100;
printf("The result of the operation between %d and %d is %d\n", a, b, operation(a, b));
}
int	main(int argc, char *argv[]) {
	/* here we need juts to use as parameter the address of function. '&function_name' */
	should_not_be_changed(&sum);
	should_not_be_changed(&prod);
	should_not_be_changed(&sub);
	should_not_be_changed(&divi);
	should_not_be_changed(&mod);
	return (0);
}

/* if all you need to do in a code is very similar but just a little thing changes like */
/* 'operation' in this boilerplate. A good way is use functions pointer. */

/* If you're a student at 42, a good example is ft_printf project to use! */
