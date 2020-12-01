#include<iostream>

struct stack {
    int size;
    int top;
    int * s;
}
t;

void push(stack *st, int x)
{
        if(st->top == st->size-1)
            std::cout<<"Stack overflow";
        else
        {
            st->top++;
            st->s[st->top] == x;
        }
        
}