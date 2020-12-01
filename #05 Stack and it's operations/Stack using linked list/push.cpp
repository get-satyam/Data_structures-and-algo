#include<iostream>

struct node
{
        int data;
        node * next;

} * top = NULL;

void push(int x)
{
        node * t = new node;
        if(t == NULL)
            std::cout<<"stack overflow";
        else
        {
            t->data = x;
            t->next = top;
            top = t;
            
        }
        
}
