//Name: Angela DeLeo
//Date: 04.19.2021
//Exercise:: Exam02 Solution

#include <iostream>
#include <string>
#include <iomanip>
#include "roster.hpp"

using namespace std;

int main()
{
   int MAX = 25;
  string name;
  Roster r;
  for(int i = 0; i < MAX; i++)
  {
    cout << "Enter new name or \'exit\': ";
    cin >> name;
    r.addName(name);


  }

  return 0;
}
