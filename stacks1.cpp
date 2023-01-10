
#include<stdio.h>
#include<iostream>

using namespace std;

class Stack
{
int top;
int arr[50];
public:
    Stack()
{
       top=-1;
}

    void push();
    void pop();
    void view();
    int isEmpty();
    int isFull();
    void  isTop();
};

int Stack::isEmpty()
{
    if(top<0)
    return true;
    else
    return false;
}

int Stack::isFull()
{
    return ( top == 50 ? 1 : 0 );
}


void Stack::isTop()
{
    int x=arr[top];
    cout<<"TOP OF STACK IS :"<<x<<endl;
    cout<<"TIME COMPLEXITY IS :"<<"O(1)"<<endl;
    cout<<"SPACE COMPLEXITY IS "<<"O(1)"<<endl;

}

void Stack::push()
{
    if(isFull())
    {
        cout<<"\nSTACK IS FULL { OVERFLOW }";
    }
    else
    {
        int i;
        cout<<"\nEnter an element :: ";
            cin>>i;
        ++top;
        arr[top]=i;
        cout<<"\nInsertion successful.\n";
        cout<<"TIME COMPLEXITY IS :"<<"O(1)"<<endl;
        cout<<"SPACE COMPLEXITY IS "<<"O(1"<<endl;

    }
}

void Stack::pop()
{
    int num;
    if(isEmpty())
    {
            cout<<"\n STACK IS EMPTY [ UNDERFLOW ] ";
    }
    else
    {
    cout<<"\nDeleted item is : "<<arr[top]<<"\n";
    top--;
    cout<<"TIME COMPLEXITY IS :"<<"O(1)"<<endl;
    cout<<"SPACE COMPLEXITY IS "<<"O(1"<<endl;
    }
}

void Stack::view()
{
    if(isEmpty())
    {
            cout<<"\n STACK IS EMPTY [ UNDERFLOW ] ";
    }
    else
    {
    cout<<"\nSTACK :\n";
    for(int i=top;i>=0;i--)
    {
            cout<<arr[i]<<"\n";
    }
    }
}



int stacks()
{
    Stack s;
    int ch;
    ch=0;
    int flag = 1;
    while(flag)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Display\n";
        cout<<"4.Top of Stack\n";
        cout<<"5. Quit\n";
        cout<<"\nEnter your Choice :: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                s.push();
                s.view();
                break;

            case 2:
                s.pop();
                s.view();
                break;

            case 3:
                s.view();
                break;

            case 4:
                s.isTop();
                break;

            case 5:
                flag = 0;
                break;

            default:
                cout<<"\nWrong Choice!! \n";
                break;
    }
    }

    return 0;
}