#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int checker = rand() % 100 + 1;
    int num = 0;
    cout << "Guess any integer number between 1 and 100: " << endl << endl;

    for (int i = 0; i<5; i++)
    {
        cin >> num;
        if (num == checker)
        {
            cout << "You won! " <<endl;
            break;
        }
        else if (num < checker && i<4)
        {
            cout << "Guess higher. " <<endl << endl;
        }
        else if (num > checker && i<4)
        {
            cout << "Guess lower. " << endl << endl;
        }
        else if ( i == 4)
        {
            cout << "You lost! " << endl << endl;
        }
    }
    return 0;
}
