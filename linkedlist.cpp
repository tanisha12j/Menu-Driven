# include<iostream>
# include "singlelist.cpp"
# include "circularll.cpp"
#include "doublell.cpp"
 
  int linkedlist()
   {
    cout<<"Which kind of linked list you want to do operation in?"<<endl;
    cout<<"1.Singly linked list"<<endl;
    cout<<"2.Doubly Linked list"<<endl;
    cout<<"3.Circular Linked list"<<endl;
    cout<<endl;
    cout<<"Enter your choice :";


    int key;
    cin>>key;

    if(key==1)
        {
            cout<<singlelinkedlist()<<endl;
        }
        
        if(key==2)
        {
            cout<<doublelist()<<endl;
     }
     
        if(key==3)
        {
            cout<<circularlist()<<endl;
        }
    
        
        
    return 0;
   }