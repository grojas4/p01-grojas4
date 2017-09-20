#include<iostream>
#include<stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
  int guess;
  char answer;
  char difficulty;
  srand ( time(NULL));
  int randomNumber;
  int difference;
  int count=0;
  int i;

  cout << "Lets play a game! " <<  endl;
  cout << "Do you want to play on easy(e), medium(m), or hard(h)? " << endl;
  cout << "Enter a letter. " << endl;
  cin >> difficulty;
  if(difficulty == 'e')
  {
   randomNumber = rand() % 2 + 1;
     cout << "Guess a number between 1 and 2. " << endl;
     cin >> guess;
     if(guess == randomNumber)
     {
       cout << "You're correct!!! " << endl;
     }
    
     else
     {
       cout << "Sorry you are incorrect try again. You were off by " << abs(randomNumber - guess) <<  endl;
     }
   }
   else if(difficulty == 'm')
   {
  randomNumber = rand() % 10 + 1;
       cout << "You get 2 tries to guess a number between 1 and 10. " << endl;
       for (i=0; i<2;i++)
       {
        cin >> guess;
        if(guess==randomNumber) 
        {
        cout << "You're correct!!! " << endl;
        break;
      }
      else
      {
        cout << "Sorry you are incorrect try again. You were off by " << abs(randomNumber - guess) << endl;
      }
       }
     }
  else
  {
    randomNumber = rand() % 100 + 1;
    cout << "You get 3 tries to guess a number between 1 and 100. " << endl;
    for(i=0; i<3; i++)
    {
      cin >> guess;
      if(guess==randomNumber)
      { 
        cout << "You're correct!!! " << endl;
        break;
      }
      else
      {
        cout << "Sorry you are incorrect try again. You were off by " << abs(randomNumber-guess) << "." << endl;
      }
    }
  }
  cout << "Do you want to play again? Y or N " << endl;
  cin >> answer;
  if(answer == 'y' || 'Y')
  {
    main();
  }
  else
  {
    return 0;
  }

   

  return 0;
}
   
