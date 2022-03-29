#include "animaux.h"
#include <iostream>
using namespace std;

animal::animal(int maxX, int maxY) {

    this->x=rand() % maxX; //abcisse
    this->y=rand() % maxY; //ordonnée
}

animal::animal(int maxX, int maxY, int x, int y){
  if(maxX >= x) {this->x = x;} 
  else {this->x = rand() % maxX;}

  if(maxY >= y) {this->y = y;} 
  else {this->y = rand() % maxY;}
}

