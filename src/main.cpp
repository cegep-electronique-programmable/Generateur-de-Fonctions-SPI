#include <Arduino.h>

//-------------------------------------------------------------
// Échantillons à envoyer au potentiomètre
//-------------------------------------------------------------
#define MAX 60
uint8_t const sin[MAX] = {
    254, 254, 252, 249, 244, 238, 231, 222, 213, 202,
    191, 179, 167, 154, 141, 127, 114, 101, 88, 76,
    64, 53, 42, 33, 24, 17, 11, 6, 3, 1,
    0, 1, 3, 6, 11, 17, 24, 33, 42, 53,
    64, 76, 88, 101, 114, 128, 141, 154, 167, 179,
    191, 202, 213, 222, 231, 238, 244, 249, 252, 254};
uint8_t const car[MAX] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255};

uint8_t const tri[MAX] = {
    9, 17, 26, 34, 43, 51, 60, 68, 77, 85,
    94, 102, 111, 119, 128, 136, 145, 153, 162, 170,
    179, 187, 196, 204, 213, 221, 230, 238, 247, 255,
    247, 238, 230, 221, 213, 204, 196, 187, 179, 170,
    162, 153, 145, 136, 128, 119, 111, 102, 94, 86,
    77, 68, 60, 51, 43, 34, 26, 17, 9, 0};

//-------------------------------------------------------------
// Machine à états et variables globales pour la forme d'onde
//-------------------------------------------------------------

// Écrire le code ici

//-------------------------------------------------------------
// Machine à états et variables globales pour la fréquence
//-------------------------------------------------------------

// Écrire le code ici


//-------------------------------------------------------------
// Décodage des fonctions 
//-------------------------------------------------------------

// Écrire le code ici

void setup()
{
  // Initilialisation de la liaison série
  // Écrire le code ici

  // Initialisation des boutons
  // Écrire le code ici

  // Initialisation du temporisateur
  // Écrire le code ici
}

void loop()
{
  // Traitement de la machine d'états pour la forme d'onde
  // Écrire le code ici

  // Traitement de la machine d'états pour la fréquence
  // Écrire le code ici

  // Traitement de la liaison SPI
  // Écrire le code ici

  // Traitement de la liaison série en lecture
  // Écrire le code ici

  // Traitement de la liaison série en écriture
  // Écrire le code ici
}

//-------------------------------------------------------------
// Définition des fonctions 
//-------------------------------------------------------------

// Écrire le code ici