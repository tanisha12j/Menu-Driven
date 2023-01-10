#include<iostream>
#include<stdlib.h>

using namespace std;
/*
class squeue
{
   int q[5],front,rare;
   public:
      squeue()
      {
         front=-1;
         rare=-1;
      }
      void push(int x)
      {
       cout<<"Time Complexity :O(1)"<<endl;
        cout<<"Space Complexity :O(1)"<<endl;
         if(front ==-1 && rare == -1)
         {
           q[++rare]=x;
           front=rare;
           return;
         }
         else if(front == (rare+1)%5 )
         {
            cout <<" Circular Queue over flow";
            return;
         }
         rare= (rare+1)%5;
         q[rare]=x;
     }
 
     void pop()
     {
         cout<<"Time Complexity :O(n)"<<endl;
        cout<<"Space Complexity :O(n)"<<endl;
        if(front==-1 && rare==  -1)
        {
          cout <<"under flow";
          return;
        }
        else if( front== rare  )
        {
          front=rare=-1;
          return;
        }
        front= (front+1)%5;
     }
 
 
 
 
 void display()
    {
      cout<<"Time Complexity :O(n)"<<endl;
      cout<<"Space Complexity :O(n)"<<endl;
      int i;
      if( front == rare)
      {
        cout<<"Queue is Empty"<<endl;
        return;
      }
      for(int i=front;i<rare;i++)
      {
        cout<<q[i];
      }
      return;
    }
};
 
int singlequeue()
{
 
int ch;
squeue q1;
int flag=1;
while(flag)
{
cout<<"\n1.INSERT   2.DELETE   3.DISPLAY    4.EXIT\nEnter ur choice\n";
cout<<endl;
cin >> ch;
switch(ch)
{
case 1: cout<<"enter element";
        cin >> ch;
        q1.push(ch); break;
 
case 2: q1.pop(); break;
case 3: q1.display(); break;
case 4: cout<<"exiting..";
         flag=0;
         break;
         default:
         cout<<"Wrong choice"<<endl;
}
}
return 0;
}
*/
class squeue
{
 public:
 int front, rear, capacity;
 int *queue;
squeue(int c)
{
 front = rear = 0;
 capacity = c;
  queue = new int;
}
~squeue() { delete[] queue; }
// function to insert an element
// at the rear of the queue
void queueEnqueue(int data)
{
// check queue is full or not
if (capacity == rear)
{
  cout << "\nQueue is full\n";
   return;
}
// insert element at the rear
else
{
   queue[rear] = data;
  rear++;
}
return;
}
// function to delete an element
// from the front of the queue
void queueDequeue()
{
// if queue is empty
if (front == rear)
{
cout << "\nQueue is empty\n";
return;
}
// shift all the elements from index 2 till rear
// to the left by one
else
{
for (int i = 0; i < rear - 1; i++)
{
   queue[i] = queue[i + 1];
}
// decrement rear
rear--;
}
return;
}
// print queue element
void queueDisplay()
{
  int i;
  if (front == rear)
{
  cout << "\nQueue is Empty\n";
  return;
}
// traverse front to rear and print elements
for (i = front; i < rear; i++)
{
   cout << queue[i];
}
return;
}
// print front of queue
void queueFront()
{
if (front == rear)
{
cout << "\nQueue is Empty\n";
return;
}
cout << "front =" << queue[front];
return;
}
};
// Driver code
int singlequeue()
{
cout << "................................\n";
cout << "................................\n";
cout << "\nExplore Linear queue\n";
cout << "................................\n";
cout<<"enter size of queue : ";
int size;
cin>>size;
squeue q(size);
int ch, val;
cout << "\nOperation list :\n";
cout << "1) Enqueue in queue" << endl;
cout << "2) Dequeue from queue" << endl;
cout << "3) Display queue" << endl;
cout << "4) Front of queue" << endl;
cout << "5) Exit" << endl;
int flag=1;
while (flag)
{
cout << "Enter choice: " << endl;
cin >> ch;
switch (ch)
{
case 1:
{
  cout << "Enter value to be pushed:" << endl;
cin >> val;
q.queueEnqueue(val);
break;
}
case 2:
{
q.queueDequeue();
break;
}
case 3:
{
q.queueDisplay();
break;
}
case 4:
{
q.queueFront();
break;
}
case 5:
{
cout << "Exit" << endl;
flag=0;
break;
}
/*case 6:
{
cout << "\nOperation list :\n";
cout << "1) Enqueue in queue" << endl;
cout << "2) Dequeue from queue" << endl;
cout << "3) Display queue" << endl;
cout << "4) Front of queue" << endl;
cout << "5) Exit" << endl;
cout << "Display stack operations" << endl;
break;
}
*/
default:
{
cout << "Invalid Choice" << endl;
}
}
}
return 0;
}