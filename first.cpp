#include<iostream>
using namespace std;

//Implement it with array
class Stack
{
    int *arr;
    int size;
    int top;
    int a=10;
    public:

    //Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int [s];
    }
    //push
    void push(int value)
    {
        if(top==size-1)
        {
        cout<<"Stack Overflow\n";
        return;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"Pushed  " <<value  << " into the stack\n";

        }
    }
    //pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
           
            cout<<"Popped "<<arr[top]<<" from the stack\n";
             top--;
        }
    }

    //Peek
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else
        {
         return arr[top];
        }
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==-1;

    }
    //IsSize
    int IsSize()
    {
        return top+1;
    }
   
};
 
int main()
{
    Stack s(5);
    s.push(5);
    s.push(6);
    s.push(8);
    s.pop();
    s.pop();
}
