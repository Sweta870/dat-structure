#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"Enter the value of number:-";
    cin>>number;
    if(number>0)
    {
        cout<<"Number is entered by you is positive number."<<endl;
        
    }
    else if(number<0)
        cout<<"Number is entered by you is Nigative number."<<endl;
    else
        cout<<"number is euual to zero";
}