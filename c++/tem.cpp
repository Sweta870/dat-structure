#include <iostream>
using namespace std;
int counter = 0;
//function that intialize the chessboard with zero
void initialzeWithzero(int chess[20][20], int value,int size)
{
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<size;j++)
        {
            chess[i][j]=value;
        }
    }
}
//Display function
void display(int chess[20][20],int size)
{
    for(int i=0; i<size; i++)
    {
       for(int j=0; j<size ;j++)
       {
           cout<<chess[i][j] << " ";
        }
       cout<<end1;
    }

}
checking the chessboard matrix as it is safe to place a queen or not

