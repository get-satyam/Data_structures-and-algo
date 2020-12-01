#include<iostream>

struct node
{
        int data;
        node * next;

} * top = NULL;

int pop()
{
        int x = -1;
        
        if(top == NULL)
            std::cout<<"Stack is underflow";
        else
        {
            p = top;
            top = top->next;
            x = p->data;
            free(p);

        }
        return x;
        
}
