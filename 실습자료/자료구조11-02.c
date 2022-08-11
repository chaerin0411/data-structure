#include <stdio.h>
#include <stdlib.h>

typedef struct list_node* list_pointer;
struct list_node {
	int data;
	list_pointer link;
};

void print_list(list_pointer ptr);
list_pointer make_node();
int nodesum(list_pointer ptr);
int nodenumber(list_pointer ptr);

void main()
{
	list_pointer ptr;
	ptr = make_node();
	print_list(ptr);
	printf("list안의 data 합 : %d\n", nodesum(ptr));
	printf("list안의 node 수 : %d\n", nodenumber(ptr));
}

list_pointer make_node()
{
	list_pointer first, second, third;
	first = (list_pointer) malloc(sizeof(struct list_node));
	second = (list_pointer) malloc(sizeof(struct list_node));
	third = (list_pointer) malloc(sizeof(struct list_node));
	first->data = 100; first->link = second;
	second->data = 200; second->link = third;
	third->data = 300; third->link = NULL;
	return first;
}

void print_list(list_pointer ptr)
{
	printf("The list contains: ");
	for (; ptr; ptr = ptr->link)
		printf("%4d", ptr->data);
	printf("\n");
}

int nodenumber(list_pointer ptr)
{
	int count = 0;
	for (; ptr; ptr = ptr->link)
		count++;
	return count;
}

int nodesum(list_pointer ptr)
{
	int sum = 0;
	for (; ptr; ptr = ptr->link)
		sum = sum + ptr->data;
	return sum;
}
