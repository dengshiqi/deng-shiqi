#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0,c=0;
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

               if(c<10)
                cout << "Either you know the secret or you got lucky!" << endl;
               if(c==10)
               cout << "Ahah!You know the secret!" << endl;
               if(c>10)
               cout << "You should be able to do better!";

            cout << "Would you like to play again (y or n)?" << endl;
           }
        if (b<a)
          cout << "Too low.Try again." << endl;
        else
           cout << "Too high.Try again" << endl;

              c=c+1 ;

    }while(true);

    return 0;
}
