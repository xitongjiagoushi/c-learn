#include <stdio.h>

typedef struct BiNode {
	struct BiNode *r_child, *l_child;
	int data;
} BiNode;

void Insert(BiNode *T, int data) {
	if (T == NULL) {
		T = {.data = data};
		return
	}
	if (T->l_child == NULL) {
		T->l_child = {.data = data}
		return
	}
	if (T->r_child == NULL) {
		T->r_child = {.data = data}
		return
	}

}

void Construct_BiTree(BiNode *T, )

int main(int argc, char const *argv[]) {
	/* code */
	BiNode *r_child;
	BiNode *l_child;
	BiNode first_tree = {r_child, l_child, 10};

	printf("Tree Root Value: %d\n", first_tree.data);


	return 0;
}