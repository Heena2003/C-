#include <stdio.h>
#include<stdlib.h>
int stack[],struct Node,newnode 
int push(int data)
{
    struct Node *newnode;
    newnode=(struct Node *)malloc(sizeof(struct Node))
    newnode->data =value;
    if (top) 
}
int pop()
{
    if (top==NULL)
    {
        printf("\nstack underflow!");
    }
    else
    {
        struct Node *temp=top; 
        int temp_data=top->data;
        top=top->next;
        return temp_data;
    }
    return 0;
}
int main()
{
    push(data);
    pop();
}