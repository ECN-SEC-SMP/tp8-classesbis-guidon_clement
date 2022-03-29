#ifndef lion_h
#define lion_h
#include <iostream>
#include "animaux.h"
using namespace std;

class Lion : public animal {
public :
    // méthodes
    void setAttaque(animal &a);
    void deplace(int maxX, int maxY);
};

