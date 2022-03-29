#include "animaux.h"
#include <iostream>
using namespace std;

animal::animal(int maxX, int maxY) {

    this->x=rand() % maxX; //abcisse
    this->y=rand() % maxY; //ordonnée
}

animal::animal(int maxX, int maxY, int a, int b){
  if(maxX >= x) {this->x = a;} 
  else {this->x = rand() % maxX;}

  if(maxY >= y) {this->y = b;} 
  else {this->y = rand() % maxY;}
}

bool animal::attaque(animal &a){
  return this->typeAttaque.resoudreAttaque(a.typeAttaque);
}
