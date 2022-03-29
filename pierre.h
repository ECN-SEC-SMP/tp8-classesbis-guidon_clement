#ifndef pierre_h
#define pierre_h
#include <iostream>
#include "animaux.h"
using namespace std;

class Pierre : public animal {
  public:
    // méthodes
    void setAttaque(animal &a);
    void deplace(int maxX, int maxY);
};