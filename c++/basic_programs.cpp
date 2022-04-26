                                        // 1. TABLE
// #include<iostream>
// using namespace std;
// main()
// {
//     int Table,i,num;
//     cout<<"enter the value of num:-";
//     cin>>num;
//     cout<<"Table of " <<num <<" is :- " <<endl;
//     for(i=1;i<=10;i++)
//     {
//         Table=num*i;
//        cout<< num<<"*"<<i <<"="<<Table<<endl;
//     }
//     return 0;
// }

//                                //     POSITIVE NEGATIVE 
// #include<iostream>
// using namespace std;
// main()
// {
//     int num;
//     cout<<"Enter the number which i want to check number is positive negative and equal:-";
//     cin>>num;
//     if(num>0)
//     {
//         cout<<num<<" Positive number"<<endl;
//     }
//     else if(num<0)
//     {
//         cout<<num<<" Negative number"<<endl;
//     }
//     else
//         cout<<num<<" Equal number."<<endl;
// } 

//                                                   //print  1 to 100 number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=0;
//     while(i<100)
//     {
//         //cout<<i;
//         i++;
//         cout<<i<<endl;
//     }

//     return 0;
// }
//                                                          //         FOR LOOP.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<100;i++)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }
//                                                                          DO WHILE.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     do
//     {
//          cout<<i<<endl;
//          i++;
        
//     } while (i<=100);
   
// }

                                                                         // PALLINDROME
// #include<iostream>
// using namespace std;
// main()
// {
//     int number,reverse=0,m,a;
//     cout<<"Enter a number: ";
//     cin>>number;
//     m=number;
//     while(number>0)
//     {
//     a = number % 10;
//     reverse= reverse * 10 + a;
//     number= number/10;
//     }
//     cout<<reverse<<endl;
//     if(reverse=m)
//     {
//         cout<<"Given number is palindrome"<<endl ;
//     }
//     else
//     {
//         cout<<"Given number is not pallindrome"<<endl ;
//     }
//     return 0;
// }
                                                              // REVERSE OF NUMBER.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,reverse = 0,remainder;
//     cout<<" Enter the number = ";
//     cin>>number;
//     while(number>0)
//     {
//         remainder = number % 10;
//         reverse = reverse * 10 + remainder;
//         number = number/10;

//     }
//     cout<<reverse;
//     return 0;
// }
                                                             // REVERSE OF NUMBER WITH RECURSION.
// #include<iostream>
//  using namespace std;
//  int reverseNumber(int number);
//  int main()
//  {
//      int number,reverse ,remainder;
//      cout<<"Enter the number =";
//      cin>>number;
//      reverse = reverseNumber(number);
//      cout<<"Reverse of number" << number <<"is :"<<reverse;
//      cout<<endl;

//      return 0;
//  }
//  int sum=0,remainder;
//  reverseNumber(int number)
//  {
//      if(number)
//      {
//          remainder = number  % 10 ;
//          sum = sum * 10 + remainder; 
//          reverseNumber(number/10);

//      }
//      else
//         return sum;
//  }



                                                                  //   FACTORIAL NUMBER
// #include<iostream>
// using namespace std;

// int main()
// {
    // int num,fact=1;
    // cout<<"Enter the number to check their factorial = ";
    // cin>>num;
    // for(int i=1;i<=num;i++)
    // {
    // fact=fact*i;
    // }
    // cout<<"Factorial of number "<< num <<" is = "<<fact;
    
//     return 0;
// }




                                                                       // prime number
#include<iostream>
using namespace std;
int main()
{
    int count=0,num,i;
    cout<<" Enter the number which you want to check prime number or not: ";
    cin>>num;
    

    for(i=2;i<=num;i++)
    {
        if(num % i==0)
            count = count +1;
    }
    cout<<"count value is "<< count<<endl;
    if(count==1)
            cout<<num<<" is prime";
    else
            cout<<num<<" is not prime";

     
    return 0;
}








 
 
