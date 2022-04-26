#include <iostream>
using namespace std;
int counter = 0;
// Function that initialize the chessboard with zero
void initilizeWithZero(int chess[20][20], int value,int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            chess[i][j] = value;
        }
    }
}
//Display function
void display(int chess[20][20],int size){
 for (int i = 0; i < size; i++)
    {


        for (int j = 0; j < size; j++)
        {
            cout << chess[i][j] << " ";
        }
        cout << endl;
    }
}

//checking the chessboard matrix as is it safe to place a queen or not
bool isSafeForQueen(int chess[20][20], int row, int col, int size)
{

    //       for vertical row testing
    for (int i = row - 1, j = col; i >= 0; i--)
    {        if (chess[i][j] == 1)


        {
            return false;
        }
    }
    //        for upper vertical left digonal testing
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; j--, i--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }
    //         for upper vertical right digonal testing
    for (int i = row - 1, j = col + 1; i >= 0 && j < size; j++, i--)
    {
        if (chess[i][j] == 1)


        {

             return false;
        }
    }
    return true;
}
// placing the queens on the board using backtracking
void placequeen(int chess[20][20], int row,int size)
{
    if (row == size)
    {
        return;
    }
    for (int col = 0; col < size; col++){
    
      
  if (isSafeForQueen(chess, row, col,size) == 1)
        {
            if (counter < size)
            {
                chess[row][col] = 1;
                counter++;
            }
            else
                break;

            placequeen(chess, row + 1,size);
            
            if (counter < size)
            {
                chess[row][col] = 0;                
                counter--;


            }
            else
                break;


        }
    }
}
//Driver code
int main()
{    int chess[20][20];
    int size;
    cout<<"Enter the size of chessboard : ";
    cin>>size;
    initilizeWithZero(chess, 0,size);


    cout << "\n before inserting the queen on the board\n";


    display(chess,size);
    placequeen(chess, 0,size);
    cout << "\n After inserting the queen on the board\n";
    display(chess,size);

    
    return 0;
}
