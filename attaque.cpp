#include "attaque.h"
#include <iostream>
using namespace std;

string Attaque::getNomAttaque()const {
  if ((this->type)==2) {return "ciseau";}
  else if ((this->type)==1) {return "feuille";}
  else if ((this->type)==0) {return "pierre";}
}