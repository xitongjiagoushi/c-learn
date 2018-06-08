#include <stdio.h>

int main(int argc, char const *argv[]) {
	/* code */

	/*
	第一题
	int * a  = &NULL;
	printf("int = %d\n", *a);
	*/


	int n = 10;
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				result++;
			}
		}
	}

	int anthor_result = 0;
	while (10 >= (anthor_result + 1) * (anthor_result + 1)) {
		anthor_result++;
	}

	printf("result = %d\n", result);
	printf("anthor_result = %d\n", anthor_result);



	return 0;
}
