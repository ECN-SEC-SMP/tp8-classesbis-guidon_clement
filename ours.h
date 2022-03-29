#ifndef ours_h
#define ours_h
#include <iostream>
#include "animaux.h"
using namespace std;

class Ours : public animal {
public :
    // méthodes
    void setAttaque(animal &a);
    void deplace(int maxX, int maxY);
};

