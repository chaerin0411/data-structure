#include <stdio.h>
#include <stdlib.h>

typedef struct list_node* list_pointer;
struct list_node {
	int data;
	list_pointer link;
};

void print_list(list_pointer ptr);
list_pointer create3();
int nodesum(list_pointer ptr);
int nodenumber(list_pointer ptr);

void main()
{
	list_pointer ptr;
	ptr = create3();
	print_list(ptr);
	printf("list안의 node 수 : %d\n", nodenumber(ptr));
	printf("list안의 data 합 : %d\n", nodesum(ptr));
}

list_pointer create3()
{
	list_pointer first, second, third;
	first = (list_pointer) malloc(sizeof(struct list_node));
	second = (list_pointer) malloc(sizeof(struct list_node));
	third = (list_pointer) malloc(sizeof(struct list_node));
	third->link = NULL;
	second->link = third;
	first->link = second;
	first->data = 10;
	second->data = 20;
	third->data = 30;
	return first;
}

void print_list(list_pointer ptr)
{
	printf("The list contains: ");
	for (; ptr; ptr = ptr->link)
		printf("%4d", ptr->data);
	printf("\n");
}

int nodesum(list_pointer ptr)
{
	int sum = 0;

	for (; ptr; ptr = ptr->link)
		sum = sum + ptr->data;
	return sum;
}

int nodenumber(list_pointer ptr)
{
	int count = 0;

	for (; ptr; ptr = ptr->link)
		count++;
	return count;
}