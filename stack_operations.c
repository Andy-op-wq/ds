#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int *arr;
    int top;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("OOPS!!!!Sstack overflow!!,can't push %d\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("OOPS!!!!!stack underflow!!,can't pop \n");
        return -1; // assuming -1 is not element of stack
    }
    else
    {
        int val = ptr->arr[ptr->top]; // sabsay top most element ko store krtay h hum val mai;
        ptr->top--;
        return val;
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("enter the size of stack\n");
    int n;
    scanf("%d", &n);
    sp->size = n;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created sucessfully\n");
    printf("before pushing\n");

    if (isFull(sp) == 1 && isEmpty(sp) == 0)
        printf("stack is full\n");
    if (isEmpty(sp) == 1 && isFull(sp) == 0)
        printf("stack is empty\n");
    if (isEmpty(sp) == 0 && isFull(sp) == 0)
        printf("stack is neither full nor empty\n");

    printf("pushing the elements u have entered.....\n");

    push(sp, 16);
    push(sp, 26);
    push(sp, 36);
    push(sp, 46);
    push(sp, 56);
    push(sp, 66);
    push(sp, 76);
    push(sp, 86);
    push(sp, 92);
    push(sp, 45);
    push(sp, 18);
    printf("after pushing\n");

    if (isFull(sp) == 1 && isEmpty(sp) == 0)
        printf("stack is full\n");
    if (isEmpty(sp) == 1 && isFull(sp) == 0)
        printf("stack is empty\n");
    if (isEmpty(sp) == 0 && isFull(sp) == 0)
        printf("stack is neither full nor empty\n");

    printf("popped %d from the stack\n", pop(sp));
    return 0;
}