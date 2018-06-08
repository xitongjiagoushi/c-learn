#include <stdio.h>

enum WeekDay {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main(int argc, char const *argv[]) {
	/* code */

	enum WeekDay sunday = Sunday;

	printf("%d\n", sunday);
	return 0;
}