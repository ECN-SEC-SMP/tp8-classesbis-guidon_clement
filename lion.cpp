#include "animaux.h"
#include "lion.h"
#include <iostream>
using namespace std;

void Lion::setAttaque(animal &a){
  this->typeAttaque=this->typeAttaque.Attaque(rand()%2+1); //Attaque avec ciseaux ou feuille
}



void Lion::deplace(int maxX, int maxY){ //Reste à faire...


}

