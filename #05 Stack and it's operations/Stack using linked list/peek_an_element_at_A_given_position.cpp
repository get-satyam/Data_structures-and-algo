#include<iostream>

struct node {
    int data;
    node * next;

}* top = NULL;

int peek(int pos) {
    node * p = TOP;

    for (int i = 0; p != NULL && i < pos - 1; i++)
        p = p->next;
    
    if(p)
        return p->data;
    else
    {
        return -1;
    }
    


}