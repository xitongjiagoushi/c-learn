#include <stdio.h>

void ditui(int n) {
	int i;
	i=n;
	while (i>1)
		printf("%d\n", i--);
}

void recursion(int n) {
	if (n > 1) {
		printf("%d\n", n);
		return recursion(--n);
	}
}

int main() {
	int n = 10;
	ditui(n);
	printf("%s\n", "===== separator =====");
	// int n;
	// scanf("%d", &n);
	// printf("%d\n", n);
	recursion(n);

}