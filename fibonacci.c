#include <stdio.h>

/*
	fibonacci in recursion
 */
long fibonacci_recursion(int number_th) {
	if (number_th == 0)
		return 0;
	if (number_th == 1)
		return 1;
	return fibonacci_recursion(number_th - 1) + fibonacci_recursion(number_th - 2);
}


/*
	fibnacci in loop
 */
long fibonacci_loop(int number_th) {
	if (number_th == 0)
		return 0;
	if (number_th == 1)
		return 1;
	// int first = 0;
	// int 
	long pre_pre_result = 0;
	long pre_result = 1;
	long result = pre_pre_result + pre_result;
	while (number_th-- > 2) {
		long temp = pre_result;
		pre_pre_result = pre_result;
		pre_result = result;
		result = pre_pre_result + pre_result;
	}
	return result;
}


int main(int argc, char const *argv[]) {
	printf("fibonacci_recursion 20th: %ld\n", fibonacci_recursion(20));
	printf("fibonacci_loop 20th: %ld\n", fibonacci_loop(20));
	return 0;
}