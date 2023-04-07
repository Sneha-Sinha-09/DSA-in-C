#include <stdio.h>
#include <stdlib.h>

#define Max 10

int count = 0;

struct stack 
{
    int data[Max];
    int top;
};

typedef struct stack st;

void CreateEmptyStack(st *s)
{
    s->top = -1;
}

int isfull(st *s)
{
    if (s->top == Max - 1)
        return 1;
    else
        return 0;
}

int isempty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void push(st *s,int new_data)
{
    if (isfull(s))
    {
        printf("Stack is full!!");
    }
    else
    {
        s->top++;
        s->data[s->top] = new_data;
    }
    count++;
}

void pop(st *s)
{
    if (isempty(s))
    {
        printf("Stack is empty!!");
    }
    else
    {
        printf("The popped data is: %d ", s->data[s->top]);
        s->top--;
    }
    count--;
}

void display(st *s)
{
    for (int i=0; i<count; i++ )
    {
        printf("%d ",s->data[i]);
    }
    printf("\n");
}

int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    
    CreateEmptyStack(s);
    
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    
    display(s);
    
    pop(s);
    
    printf("\nAfter popping the top data: \n");
    display(s);
}