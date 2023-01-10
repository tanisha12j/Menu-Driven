#include <iostream>
#include "stacks1.cpp"
#include "linkedlist.cpp"
#include "queues.cpp"
#include "array.cpp"
using namespace std;

      
int main()
{
    cout << "Welcome To Coding World" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Made by Tanisha, CSE-2, 2nd year" << endl;
    cout << "-----------------------------------" << endl;
    while(1)
    {
      cout << "Welcome To Coding World" << endl;
        cout << "What you want to use ?" << endl;
        cout << "1)Arrays" << endl;
        cout << "2)Linked List" << endl;
        cout << "3)Stacks" << endl;
        cout << "4)Queues" << endl;
        cout << "5)Exit" << endl;
        int key;
        cin >> key;
            
            switch(key)
            {

            case 1 :
                cout << arrays() << endl;
                break;
            case 2 :
              cout<< linkedlist()<<endl;
              break;
            case 3 :
              cout<<stacks()<<endl;
              break;
            case 4:
              cout<<queues()<<endl;
              break;
            case 5:
              cout<<"Exiting"<<endl;
              exit(1);
              break;      
            default:
            cout<<"Wrong choice"<<endl;
            break;
            
            
        }
    }
    
    return 0 ;
}