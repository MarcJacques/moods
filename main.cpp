#include <iostream>
using namespace std;

int main() 
{
  int mood;
  cout << "Rate your mood on a scale of 1 - 4" << endl;
  cin >> mood;

  switch(mood) {
    case 1 : cout << "Play tennis"; break;
    case 2 : cout << "Play basketball"; break;
    case 3 :
    case 4 : cout << "Go for a swim"; break;
    default: cout << "Go watch a movie";
  }
  return 0;
}