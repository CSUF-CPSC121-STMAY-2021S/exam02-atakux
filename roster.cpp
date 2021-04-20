#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include "roster.hpp"

using namespace std;

Roster::Roster()
{
   int MAX = getCount();
  numElements = 0;
  string * elements = new string[MAX];

}

void Roster::addName(string name)
{

 int MAX = getCount();

 //temporary array
 string * temp = new string[MAX + 1];


 //copy contents
 for(int i = 0; i < MAX; i++)
 {
   temp[i] = elements[i];
  }

  //add new data
  do
  {
    cout << "Enter new name or \'exit\': ";
    cin >> name;
    if(name == "exit")
      break;
    else
    {
      name = temp[numElements];
      cout << endl << endl;
      cout << "Current Roster: " << endl << "\t";
      getName();
    }

    ++numElements;
  } while(name != "exit");


  //delete memory
  delete [] elements;

  //assign temp array
  temp = elements;

  numElements++;

  //sort
  bool swap = true;
  for(int MAX = getCount() - 1; MAX > 0 && swap == true; MAX--)
  {
    swap = false;
    for(int i = 0; i < MAX; i++)
    {
      if(temp[i] > temp[i])
      {
        string t = temp[i];
        temp[i] = temp[i + 1];
        temp[i + 1] = t;
        swap = true;
      }
    }
  }
}
