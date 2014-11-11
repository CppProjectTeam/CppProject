
#include "Partie.h"

Partie::Partie(Joueur * joueurDroit, Joueur * joueurGauche) :
monEtat(pasEncoreCommence),
joueurDroit(joueurDroit),
joueurGauche(joueurGauche)
{}

void Partie::begin()
{
    monEtat = Etat::enCours;
}

void Partie::end()
{
    monEtat = fini;
}