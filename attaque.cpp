#include "attaque.h"
#include <iostream>
using namespace std;

string Attaque::getNomAttaque()const {
  if ((this->type)==2) {return "ciseau";}
  else if ((this->type)==1) {return "feuille";}
  else if ((this->type)==0) {return "pierre";}
}

bool Attaque::resoudreAttaque(Attaque &a) const{ //attaque entre 2 animaux
  bool resol=0; //variable booléenne vrai ou fausse
  int aleat=0; //variable aléatoire pour décider d'un gagnant si égalité
  
  if(this->type==a.type) // Si égalité  
    {
    aleat=rand()%2; // valeur 0 ou 1
    if (aleat==0) 
      resol=false; //perdu
    else 
      resol=true; //gagné
    }
    
  else if ((this->type==2 && a.type==0) || (this->type==1 && a.type==2) || (this->type==0 && a.type==1)) //Cas où perdu
    resol=false; //perdu

  else
    resol=false; //gagné

  return resol;
}