#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0;
    cout << "I have a number between 1 and 1000." << endl;
    cout << "Can you guess my number?"<< endl;
    cout << "Please type your first guess." << endl;

    cin>>a;
    do
    {
        cin>>b;
        if( b==a )
           {
            cout << "Excellent! You guessed the number!" << endl;
            cout << "Would you like to play again (y or n)?" << endl;
            }
        if (b<a)
            cout << "Too low.Try again." << endl;
        else
            cout << "Too high.Try again" << endl;
    }while(true);

    return 0;
}
