#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

struct node
{
        char data;
        struct node * next;

} * top = NULL;


void push (char da)
{
        struct node * t = new node;
        if(t == NULL)
            cout<<"Stack overflow";
        else
        {
                t->data = da;
                t->next = top;
                top = t;

        }
        
}
char pop()
{
        struct node *t;
        char x = -1;
        if(top == NULL)
            cout<<"Stack is empty";
        else
        {
            t = top;
            top = top->next;
            x = t->data;
            free(t);
        }

        return x;
        
}
int matching(char const *exp)
{
        

        for(int i = 0; exp[i] != '\0'; i++)
        {
                if(exp[i] == '(')
                    push(exp[i]);
                else if(exp[i] == ')')
                {
                    if(top = NULL)
                        return 0;
                    pop();
                }
                
        }
        if(top == NULL)
            return 0;
        else 
            return 1;
}
int main()
{
        char const *exp = "((a+b)*(c-d)";
      
        matching(exp);
        
        
}