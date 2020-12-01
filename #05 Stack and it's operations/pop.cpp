#include<iostream>

struct stack {
    int size;
    int top;
    int * s;
}
t;

int pop(stack * st)
{
        int x = -1;
        
        if(st->top == -1)
        {
                std::cout<<"Stack underflow";
        }
        else
        {
            x = st->s[st->top];
            st->top--;
            
        }
        return x;
}