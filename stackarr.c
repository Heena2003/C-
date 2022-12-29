#include<stdio.h>
int stack[100],choice,n,top,x,i;
int push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    return stack[top];
}
int pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
    return stack[top];
}
int peek()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    return 0;
}
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t Here are the operations");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Select one:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:         
                peek();
                break;
            case 4:
                printf("\n\t Exit!!");
                break;
            default:
                printf ("\n\t Please Enter a Valid Choice(1/n2/n3/n4/n)");
                
        }
    }
    while(choice!=4);
    return 0;
}