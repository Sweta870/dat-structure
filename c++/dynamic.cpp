#include<iostream>
using namespace std;
main()
{
    int size;
    int *ptr;
    
    cout<<"Enter the size of array:-";
    cin>>size;
    ptr = new int [size];
    cout<<"Enter the value of an array:-";
    for (int i = 0; i < size; i++)
    {
        
        cin>>ptr[i];
    }
     for (int i = 0; i< size; i++)
     {
        cout<<"Enter the value of an array:-"<<ptr[i]<<endl; }
}