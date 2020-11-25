#include<iostream>

struct node {
    int data;
    node * next;
}
node * first = NULL;

//To reverse a linked list using sliding pointers

void reverse(node * p) {
    node * q = NULL, * r = NULL;

    while (p != NULL) {
        r = q;
        q = p;
        p = p - > next;
        q - > next = r;
    }
    first = q;
}

//To reverse recursively

void Reverse3(Node * q, Node * p) {
    if (p) {
        Reverse3(p, p - > next);
        p - > next = q;
    } else
        first = q;
}