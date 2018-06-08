#include <stdio.h>

// declare struct Person
// if not, you need to use 'struct Person person = {...}' every time when to initialize
typedef struct Person Person;

// struct definition
struct Person {
	char name[20];
	int age;
	char gender[7];
	struct Connection {
		long mobile;
		char email[20];
	} connection;
}lucy, *lily, school[5];  // lucy is a Person instance, lily is a pointer of Person instance, school is an array of Person instance


int main(int argc, char const *argv[]) {
	// sturct initialization
	// all field initialization
	lucy = (Person) {"Melinda Lucy", 20, "female", {15201610000, "abc@example.com"}};  // {} surrounds inner struct(recommended)
	Person tom = {"Tom Hanks", 25, "male", 18810920000, "cde@example.com"};  // {} do not surrouns
	// partial field initialization
	Person jerry = {.name = "jerry mouse"};
	printf("instance 1, name: %s, age: %d, gender: %s; connection info: %ld, %s\n",
		lucy.name, lucy.age, lucy.gender, lucy.connection.mobile, lucy.connection.email);
	printf("instance 2, name: %s, age: %d, gender: %s; connection info: %ld, %s\n",
		tom.name, tom.age, tom.gender, tom.connection.mobile, tom.connection.email);
	printf("instance 3, name: %s\n", jerry.name);


	// instance lily's address point to instance lucy's name field
	lily = (struct Person *) &lucy.name;  // (Person *) also works, as typedef works

	school[0] = (Person) {"Tim Duncan", 40, "male"};
	school[1] = (Person) {"Tony Parker", 33, "male"};
	school[2] = (Person) {"Manu Ginobili", 35, "male"};

	return 0;
}