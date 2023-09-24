#include <iostream>
using namespace std;

int main()
{
  int width = 20, height = 13;
  char border = '#', driver = '$', seat = 'A', reserve = '@';
  int number = 1;

  for (int i = 1; i <= height; i++)
  {
    if (i == 2 || i == 3)
      cout << " ";
    else
      cout << border;

    for (int j = 2; j <= width - 1; j++)
    {
      if (i == 1 || i == height)
        cout << border;
      else if (i >= 2 & i <= 3 & j >= width - 4)
        cout << driver;
      else if (i >= 5)
      {
        if (j == 10)
        {
          cout << "  ";
          j += 1;
        }
        else
        {
          cout << " " << seat << number << " ";
          number++;
          j += 3;
        }
      }
      else
        cout << " ";
    }

    if (i >= 5)
    {
      seat++;
      number = 1;
    }

    cout << border;
    cout << endl;
  }
}