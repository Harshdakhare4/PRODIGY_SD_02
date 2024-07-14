#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int num, guess, attempts = 0;
    cout << "Generated a number" << endl;
    srand(time(0));
    num = rand() % 100;

    cout << "Guess a number between 1 to 100: " ;
    cin >> guess;
    while (guess != num)
    {
        if (guess > num)
        {
            cout << "Guess is too high." << endl;
            attempts++;
        }
        else if (guess < num)
        {
            cout << "Guess is too low." << endl;
            attempts++;
        }
        cout<<"Guess another number: ";
        cin >> guess;
    }
    cout << "Bingo!! You guessed the correct number." << endl;
    attempts++;
    cout << "Number is:" << num << endl;
    cout << "Attempts made:" << attempts << endl;
}