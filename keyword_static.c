#include <stdio.h>

/**
 * static | auto | extern | register
 */
void foo();


int main(int argc, char const *argv[]) {
	foo();
	foo();
	foo();
	return 0;
}


void foo() {
	static int s = 0;
	int i = 0;  // auto is default
	auto int j = 0;  // auto is default, variable 'i' belongs to 'auto'
	register int r = 0;  // malloc to register instead of memory, DO NOT use '&r' to get address
	// extern int e = 0;  // extern varialbe CAN NOT have an initializer

	// accumulate
	s++;
	i++;
	j++;
	r++;

	printf("s = %d, i = %d, j = %d, r = %d\n", s, i, j, r);

}