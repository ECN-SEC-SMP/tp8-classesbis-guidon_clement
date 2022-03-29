#include "animaux.h"
#include "loup.h"
#include <iostream>
using namespace std;

void Loup::setAttaque(animal &a){
  this->typeAttaque=this->typeAttaque.Attaque(0); //attaque aléatoire
}



void Loup::deplace(int maxX, int maxY){
  this->x=rand()%10+1; //position random avec abcisse et ordonnée entre 1 et 10
  this->y=rand()%10+1;
}

