#include<iostream>

struct stack {
    int size;
    int top;
    int * s;
};

// Function to find an element in a given position.
// to get to the desired index we use the formula { top - pos + 1 }

int peek(stack st, int pos)
{
        int x = -1;
        if(st.top-pos+1 == -1)
            std::cout<<"Invalid position";
        else
        {
            x = st.s[st.top-pos+1];
        }
        return x;
}

//Function to find the topmost value in stack

int stackTop(stack st)
{
        if(st.top == -1)
        {
            return -1;
        }
        else
        {
            return st.s[st.top];    
        }
        
}
//Function to find if stack is empty

int Empty(stack st)
{
        if(st.top == -1)
            return 1;
        else
        {
            return 0;
        }
        
}

//function to find if stack is full

int full(stack st)
{
        if(st.top == st.size-1)
            return 1;
        else 
            return 0;
}