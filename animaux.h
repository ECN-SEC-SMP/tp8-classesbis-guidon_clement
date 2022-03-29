#ifndef animaux_h
#define animaux_h
#include <iostream>
using namespace std;

class animal {

protected:
    string nom;
    int x; //abcisse
    int y; //ordonnée
    bool vivant;
    Attaque typeAttaque;

    
public:
    // accesseurs en lecture
    string getNom() { return nom; }
    int getX() { return x; }
    int getY() { return y; }
    bool getVivant() { return vivant; }
    Attaque getAttaque() { return typeAttaque; }
    
    // accesseurs en écriture
    void setVivant(bool v) { this->vivant=v; }
    virtual void setAttaque(a)=0; //virtuelle pure
    
    // méthodes
    virtual void deplace(int maxX, int maxY)=0; //virtuelle pure
    bool attaque(Animal &a);
    
    // constructeurs
    animal(int maxX, int maxY);
    animal(int maxX, int maxY, int a, int b);
};






#endif /* animaux_h */