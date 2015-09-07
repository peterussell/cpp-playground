#include <iostream>
#include <climits>

using namespace std;

int main()
{
  // Prints the min and max values for a selection of data types
  cout << "minimum short " << SHRT_MIN << endl;
  cout << "maximum short " << SHRT_MAX << endl << endl;

  cout << "minimum unsigned short " << 0 << endl;
  cout << "maximum unsigned short " << USHRT_MAX << endl << endl;

  cout << "minimum int " << INT_MIN << endl;
  cout << "maximum int " << INT_MAX << endl << endl;

  cout << "minimum unsigned int " << 0 << endl;
  cout << "maximum unsigned int " << UINT_MAX << endl << endl;

  cout << "minimum long " << LONG_MIN << endl;
  cout << "maximum long " << LONG_MAX << endl << endl;

  cout << "minimum unsigned long " << 0 << endl;
  cout << "maximum unsigned long " << ULONG_MAX << endl << endl;
}
