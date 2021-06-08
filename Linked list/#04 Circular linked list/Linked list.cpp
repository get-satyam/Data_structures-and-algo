#include<iostream>

using namespace std;
//structure to declare a linked list
struct node
{
    int data;
    node * next;
}* FIRST = NULL;

//Function to create a circular linked list
void create(int a[],int n)
{
        node *t, *last;
        FIRST = new node;
        FIRST->data = a[0];
        FIRST->next = FIRST;
        last = FIRST;

        for(int i = 0; i<n; i++)
        {
                t = new node;
                t->data = a[i];
                t->next = last->next;
                last->next = t;
                last = t;

        }
}
//function to print a circular linked list
void display(node *h)
{
        static int flag =0;
        if(h != FIRST || flag == 0) 
        {
            flag = 1;
            cout<<h->data;
            display(h->next);
        }  
        flag =0;
}
//function to find the length of the circular linked list
int length(node * l)
{
        int len = 0;
        do
        {
            len++;
            l=l->next;
        } while (l!=FIRST);
    return len;
}

//Function to insert a a value in a circular linked list

void insert(int index, int x)
{
        node * t = new node;
        node *p = FIRST;

        if(index == 0)
        {
                t->data = x;
                if(FIRST == NULL)
                {
                        FIRST = t;
                        FIRST->next = FIRST;
                }
                else
                {
                        while(p->next != FIRST)
                            p = p->next;
                        p->next = t;
                        t->next = FIRST;
                }
        }
        else
        {
                for(int i = 0; i< index-1; i++)
                {
                      p = p->next;
                }
                t->data = x;
                t->next = p->next;
                p->next = t;

        }
                
        
}


int main()
{
        int n, ind, data;
        cin>>n;
        int a[n];

        for(int i= 0;i<n;i++)
            cin>>a[i];

        create(a, n);
        cout<<"ENTER YOUR CHOICE: ";
        cout<<"\n 1. Display the circular linked list ";
        cout<<"\n 2. Find the length of the linked list";
        cout<<"\n 3. Insert an element into the circular linked list";
        cout<<"\n Your choice: ";
        
        int choice;
        cin>>choice;

        switch (choice)

        {
            case 1: display(FIRST);
                    break;
            case 2: length(FIRST);
                    break;
            case 3: cout<<"\n Enter the data to be inserted: ";
                    cin>>data;
                    cout<<"\n Enter the position to be inserted: ";
                    cin>>ind;
                    insert(ind, data);
            default: cout<<"Enter the correct choice!!";
                    break;
        }

        return 0;

}