#include <stdio.h>

void ditui(int n) {
	int i;
	i=n;
	while (i>1)
		printf("%d\n", i--);
}

void recursion(int &sum, int n) {
	if (n == 0) {
		sum = 0;
	} else {
		recursion(sum, n);
		sum += n;
	}
	printf("%d\n", sum);
}

int main() {
	int n = 10;
	// ditui(n);
	printf("%s\n", "===== separator =====");
	// int n;
	// scanf("%d", &n);
	// printf("%d\n", n);
	int sum;
	recursion(sum, n);

}