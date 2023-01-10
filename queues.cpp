# include<iostream>
# include "squeue.cpp"
# include "cqueue.cpp"
//# include "prqueue.cpp"


int queues()
{
    cout<<"Which kind of Queues you want to do operation in?"<<endl;
    cout<<"1.Single Queue"<<endl;
    cout<<"2.Circular Queue"<<endl;
    //cout<<"3.Priority queues"<<endl;
    cout<<"Enter your choice :";


     /*  int flag=1;

       while(flag)

       {
        int ch;
        cin>>ch;
        switch(ch)
        { 
         */
        int key;
        cin>>key;
         if(key==1)
         {
            cout<<singlequeue()<<endl;
         }
         if(key==2)
         {
           cout<<circularqueue()<<endl;
         }
         //if(key==3)
         //{
          //cout<<priorityqueue()<<endl;
         //}
      

       
return 0;
}