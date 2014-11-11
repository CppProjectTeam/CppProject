#ifndef __CppProject__Partie__
#define __CppProject__Partie__

#include <stdio.h>

//
//  Classe Partie
//
//  Une instance de cette classe est créée quand deux joueurs commencent
//  une partie.
//  Elle subsiste à la fin de la partie dans un état "finie".
//

typedef  enum : int {
    pasEncoreCommence,
    enCours,
    fini,
} Etat;

class Joueur;

class Partie{
private:
    
    
public:
    Partie(Joueur * joueurDroit, Joueur * joueurGauche);
    Joueur * joueurDroit;
    Joueur * joueurGauche;
    Etat monEtat;
    void begin();
    void end();
};


#endif /* defined(__CppProject__Partie__) */
