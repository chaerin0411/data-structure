#include <stdio.h>
#include <stdlib.h>

typedef struct cnode* npointer;
struct cnode {
	int num;
	char grade;
	npointer link;
};

void insert_front(npointer node);
void c_print();
int how_many();
npointer ptr = NULL;

main()
{
	int cond = 1, i;
	npointer temp;
	while (cond) {
		temp = (npointer)malloc(sizeof(struct cnode));
		printf("Enter id and grade : ");
		scanf("%d %c", &(temp->num), &(temp->grade));
		insert_front(temp);
		printf("Continue?(0/1) : ");
		scanf("%d", &cond);
	}
	c_print();
	printf("The number of nodes in this list = %d\n", how_many());
}

void insert_front(npointer node)
{
	if (!ptr) {
		ptr = node;
		node->link = node;
	}
	else {
		node->link = ptr->link;
		ptr->link = node;
	}
}

void c_print()
{
	npointer temp = ptr;
	if (ptr) {
		do {
			printf("%d : %c\n", temp->num, temp->grade);
			temp = temp->link;
		} while (temp != ptr);
	}
}

int how_many()
{
	npointer temp;
	int count = 0;
	if (ptr) {
		temp = ptr;
		do {
			count++;
			temp = temp->link;
		} while (temp != ptr);
	}
	return count;
}
