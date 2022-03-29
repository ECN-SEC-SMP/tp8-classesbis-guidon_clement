#include "animaux.h"
#include "pierre.h"
#include <iostream>
using namespace std;


void Pierre::deplace(int maxX, int maxY){
//nothing, la pierre ne se déplace pas
}



void Pierre::setAttaque(){
  this->typeAttaque=this->typeAttaque.Attaque(0); //Attaque avec pierre
}

