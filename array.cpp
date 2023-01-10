#include <iostream>
using namespace std;

int arrays()
{
    cout<<"\nExplore integer array\n";
    int position= 0;
    int arr[100];
    cout<<"\nWhich operation you want to perform :\n";
    cout<<"1.] Insert element\n";
    cout<<"2.] Delete element\n";
    cout<<"3.] Size of array\n";
    cout<<"4.] Traverse and print all elemebnts\n";
    cout<<"5.] Searching\n";
   // cout<<"6.] Sorting\n";
    cout<<"6.] Exit\n";


    int flag=1;
    while(flag){
        int k;
        cout<<"operation number = ";
        cin>>k;
           switch(k)
           {

            case 1 :{
                if(position==100){
                    cout<<"array overflow\n";
                    break;
                }
                else{
                    cout<<"enter element = ";
                    int x;
                    cin>>x;
                    arr[position]=x;
                    position++;
                    break;
                }
            }
            //delete
            case 2 :{
                if(position==-1){
                    cout<<"array underflow";
                    break;
                }
                else{
                    position--;
                    break;
                }
            }
            //size
            case 3 :{
                int l=position;
                cout<<"size of array = "<<l<<"\n";
                break;
            }
            //traverse
            case 4 :{
                for(int i=0;i<position;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<"\n";
                break;
            }
             //searching
            case 5 :{
                cout<<"which element you wamnt to search = ";
                int d,i=0;
                cin>>d;
                for(i=0;i<position;i++){
                    if(arr[i]==d){
                        cout<<"element present at index "<<i;
                        break;
                    }
                }
                if(i==position){
                    cout<<"element not found";
                }
                cout<<"\n";
                break;
            }
            /*//sorting
            case 6 :{
                for(int i=0;i<position;i++){
                    for(int j=0;j<(position-i-1);j++){
                        if(arr[j]>arr[j+1]){
                            int temp=arr[j+1];
                            arr[j+1]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }
                for(int i=0;i<position;i++)
                {
                    cout<<arr[i]<<" ";
                }
                break;
            }
            */
            case 6 :{
                cout<<"Exiting...."<<endl;
                flag=0;
                break;
            }
        }
    }

    
    return 0;
}



