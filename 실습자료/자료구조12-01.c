#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct exnode* expointer;
struct exnode {
    char state[3];
    int sdata;
    expointer nlink;
};

void make_list1(expointer inode);
void make_list2(expointer inode);
void print_list();

expointer head = NULL; // 전역변수
main()
{
    expointer inode;
    int k;

    head = (expointer)malloc(sizeof(struct exnode));
    strcpy(head->state, "NY");
    head->sdata = 5;
    head->nlink = NULL;

    for (k = 0; k < 3; k++) {
        inode = (expointer)malloc(sizeof(struct exnode));
        printf("Enter state_name and order : ");
        scanf("%s %d", (inode->state), &(inode->sdata));
        // make_list1() 또는 make_list2()함수를 call하여 노드를 연결한다
        make_list1(inode);
    }
    printf("======================\n");
    print_list(); //print_list 함수를 call하여 출력한다
}






void make_list1(expointer inode)
{
    expointer ptr = head, before;

    while (ptr != NULL) {
        before = ptr;
        ptr = ptr->nlink;
    }
    before->nlink = inode;
    inode->nlink = NULL;
}

void make_list2(expointer inode)
{
    inode->nlink = head;
    head = inode;
}
void print_list()
{
    expointer ptr = head;
    printf("The singly linked list contains : \n");
    while (ptr != NULL) {
        printf("%s  :  %d\n", ptr->state, ptr->sdata);
        ptr = ptr->nlink;   // 출력할 다음 노드로 움직인다
    }
}