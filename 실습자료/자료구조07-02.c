#include <stdio.h>
#define MAX_QUEUE_SIZE 7
typedef struct {
    int job_num;
    char grade;
} element;
element queue[MAX_QUEUE_SIZE];
int rear = 0;
int front = 0;
void caddq(element item);
element cdeleteq();

main()
{
    int i, job_num, out, cond = 1;
    element temp;
    while (cond) {
        printf("�Ϸ��� �۾� ����? ");
        scanf("%d", &job_num);

        printf("�۾���ȣ�� �۾����� �Է� :\n");
        for (i = 0; i < job_num; i++) {
            scanf("%d %c", &temp.job_num, &temp.grade);
            caddq(temp);
        }
        printf("����� �۾��� ����? ");
        scanf("%d", &out);
        for (i = 0; i < out; i++) {
            temp = cdeleteq();
            printf("%d\t%c\n", temp.job_num, temp.grade);
        }
        printf("front = %d :: rear = %d\n", front, rear);
        printf("�۾��� ������� ����ϽǷ���(1/0)?");
        scanf("%d", &cond);
    }
}

void caddq(element item)
{
    int next_rear = (rear + 1) % MAX_QUEUE_SIZE;
    if (next_rear == front)
        printf("Queue is Full !!!");
    else {
        rear = next_rear;
        queue[rear] = item;
    }
}

element cdeleteq()
{
    /* queue�� front ���Ҹ� �����Ͽ� �װ��� item�� ���� */
    if (rear == front)
        printf("Queue is Empty!!!");
    else {
        front = (front + 1) % MAX_QUEUE_SIZE;
        return queue[front];
    }
}