#include <stdio.h>
#include <stdlib.h>
struct stack
{
  int size;
  int top;
  int *arr; // is pointer ki help sai hum memory dynamically allocate kry gai array k liyai jo stack hold kry ga
};
int isempty(struct stack *ptr)
{
  if (ptr->top == -1)
    return 1; // true
  else
    return 0;
}
int isFull(struct stack *ptr)
{
  if (ptr->top == ptr->size - 1)
    return 1;
  else
    return 0;
}
int main()
{
  struct stack *s;
  s->size = 80;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));

  // manually push element in stack

  //  s->arr[0]=7;
  //   s->top++;

  // check if stack is empty or not
  // we are not using isFull function , we are using isempty function only . if we have to check if stack is full or not , then we will use that function

  if (isempty(s))
  {
    printf("stack is empty\n");
  }
  else
  {
    printf("stack is not empty\n");
  }
  return 0;
}
