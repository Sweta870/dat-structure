#include <iostream>

#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int user_input;
    string name;
    int counter = 6;

    srand((unsigned)time(NULL));
    int random = (rand() % 101);

    cout << "\n\n==================WELCOME TO THE GUESSING GAME============================\n";
    cout<<"Enter your name :";
    cin>>name;
    cout << "\n              Guess the number between  1 to 100 : ";
    cin >> user_input;
    
    

    for (int i = 0; i < 10; i++)
    {
        if (user_input == random)
        {
            cout << "\n\n\n\n\t\tHey!!.........You Won the Game---------------\n\n";
            cout << "\t\tComputer's Generated Number : " << random;
            cout << "\n\t\tYour Number is : " << user_input << "\n";
             cout << "\n\t\tconguralation "<< name  <<" you are winner.\n\n";
            break;
        }
        else if (user_input > random && counter > 0)
        {
            cout << "\n\t\t!!!!!!!!!!!!!!! Wrong Guess!!!!!!!!!!\n\n";
            cout << "\t\tOnly " << counter << " attempt left\n";
            cout << "\t\tHINT : Enter  a smaller number :";
            cin >> user_input;
            counter--;
            continue;
        }
        else if (user_input < random && counter > 0)
        {
            cout << "\n\t\t!!!!!!!!!!!!!!! Wrong Guess!!!!!!!!!!\n\n";
            cout << "\t\tOnly " << counter << " attempt left\n";
            cout << "\t\tHINT : Enter a Larger number :";
            cin >> user_input;
            counter--;
            continue;
        }
        if (counter == 0)
        {
            cout << "\n\t\tyou lost the game , Better luck , next time.\n\n";
            break;
        }
    }

    return 1;
}