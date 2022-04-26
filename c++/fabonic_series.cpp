#include<iostream>
using namespace std;
main()
{
    int n1=0,n2=1,n3,count;
   cout<<" Enter the value of count:-";
   cin>>count;
   cout<<"Fabonic series is:-";
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<count;i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        
    }
}