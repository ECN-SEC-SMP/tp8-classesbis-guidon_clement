#ifndef loup_h
#define loup_h
#include <iostream>
#include "animaux.h"
using namespace std;

class Loup : public animal {
public :
    // méthodes
    void setAttaque(animal &a);
    void deplace(int maxX, int maxY);
};

