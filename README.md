CppProject
==========

# Description

Ceci est le projet C++ des étudiants suivants :
* Marc Alonso-Casas
* Walid Bendada
* Damien Vielpeau

Il s'agit d'un jeu nommé "Castle Rush", qui se joue à deux sur un même ordinateur et qui consiste à essayer de prendre pocession du chateau de l'adversaire en construisant des casernes produisant des soldats.

# Règles générales

## Langue

On écrit tout en français.

# Notes pour la configuration de l'IDE

Le dossier placé sous git est contenant tous les fichiers utiles s'appelle "CppProject". C'est le dossier dans lequel est ce présent document.

Il y a ensuite deux sous-dossier :
* "bin" qui est destiné à recevoir le projet compilé, autrement dis l'exécutable windows.
* "src" qui contient toutes les sources nécessaires à la compilation, y compris les ressources telles les images etc...

Toutes les ressources (ie. les fichiers autre que du code) sont regroupés dans le sous-dossier "Ressources" du dossier "src".
Ainsi pour accéder à un des ces fichiers, il est nécessaire d'utiliser une URL du type "src/Ressources/monFichier.extension".

# Notes sur Git

L'utilisation de Git en pratique est assez simple, mais elle nécessite un peu de rigueur. Git est une technologie de gestion de version qui permet de travailler à plusieurs sur un même projet. On l'utilise via GitHub qui est un service (web + programme) de stockage en ligne de code. Je décris ici les bases mais n'hésitez pas à chercher sur le net plus d'infos.
**Surtout, en cas de problème, n'essayez pas de le résoudre vous même ce qui peut tout casse, mais appelez-moi !**

## Installation

1. Commencez par installer le programme "GitHub".
2. Ajoutez le présent projet "CppProject" à vos projets.
3. Clonez-le afin de rapatrier les fichiers sur votre ordinateur.
4. Ouvrez le fichier.

## Utilisation

1. Commencez par faire un "sync" depuis le logiciel GitHub. Afin de rapatrier les changements faits par les autres collaborateurs.
2. Ouvrez l'IDE et commencez à travailler.
3. A chaque modification unitaire (la plus petite modification qui a un sens clair et qui compile), faite un "commit", qui est l'unité de modification de Git. Vous devez indiquer un descriptif clair, c'est très important pour s'y retrouver. Vous pouvez choisir les fichiers inclus dans votre commit. Il faut bien comprendre que fair un commit n'envoie rien sur le serveur mais permet juste d'indiquer qu'on a fait un changement et le décrire.
4. Enfin, faite un "sync" qui permet d'envoyer tous les commits faits depuis le dernier "sync" sur le serveur

## Résumé des commandes
* **Commit** pour créer un commit
* **Sync** pour envoyer vos commits sur le serveur et télécharger les modifs. C'est-à-dire tous les commits qui ont été pushé depuis votre dernier pull.

NB : Git inclut un systèmes de branches qui permettent de travailler en parallèle sur deux versions différentes (deux branches différentes) du même projet. Nous n'utiliserons pas les branches et nous resterons donc sur une unique banche, nommée "master".
