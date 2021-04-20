#ifndef ROSTER_HPP
#define ROSTER_HPP

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Roster
{
private:
  string name;
  string * elements;
  int numElements = 0;;
public:
  Roster();

  void addName(string);

  int getCount()
  {
    return numElements;
  }

  string getName()
  {
    return name;
  }



};


#endif
