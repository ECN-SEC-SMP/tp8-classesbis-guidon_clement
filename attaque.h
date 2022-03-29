#ifndef attaque_h
#define attaque_h
#include <iostream>
#include "animaux.h"
using namespace std;


class Attaque {
private:
    int type;// 0 :pierre, 1: Feuille, 2:Ciseau
    
public:

    // méthodes
    void setAttaque();
    void deplace(int maxX, int maxY);

    // constructeurs
    Attaque() {this->type=random()%3} //crée une attaque random
    Attaque(int a) {this->type=a;} //crée une attaque spécifique

    int getAttaque() { return type; }
    
    string getNomAttaque() const;
    bool resoudreAttaque(Attaque &a) const;
};

