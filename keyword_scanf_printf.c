#include <stdio.h>

/**
 * scanf & printf
 */
int main() {

	char author_name[20];
	printf("please type in author's name(press enter to confirm): ");
	scanf("%s", author_name);
	printf("author's name is: %s\n", author_name);

	return 0;
}
