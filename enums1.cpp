#include <iostream>

using namespace std;

enum Answer { YES = 1, YEP = 1, AFFIRM = 1, NO = 0, NOPE = 0, NEGATIVE = 0 };

int main()
{
  cout << "Do you want to build a snowman? " << endl;
  Answer answer;
  cin >> answer;

  cout << "You said " << answer << endl;
  if( answer == YES ) {
    cout << "Alright let's do it!" << endl;
  } else {
    cout << "Maybe next time." << endl;
  }
};
