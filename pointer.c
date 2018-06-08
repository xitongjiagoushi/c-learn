#include <stdio.h>

int main(int argc, char const *argv[]) {

	/* code */
	int target_value = 5;
	int target_array[] = {1,2,3};
	int target_array_length = sizeof(target_array) / sizeof(target_array[0]);


	int *int_pointer = &target_value;

	int *arg_name = target_array;

	// 指针指向数组名
	// C／C++中数组名即为数组的首地址
	int *array_pointer = target_array;
	// 指向指针的指针
	// 变量为指针变量时，可以赋值给指针
	// 普通变量，不能直接赋值给指针
	// 下面注释的这个赋值语句报错
	//int *pointer_pointer = target_value;
	// 
	int *int_pointer = int_pointer;
	int *null_pointer = NULL;


	printf("%d\n", *arg_name);



	for (int i = 0; i < target_array_length; i++) {
		printf("target_array %d value: %d \n", i, target_array[i]);
	}

	return 0;
}