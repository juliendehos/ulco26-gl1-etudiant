#pragma once

#include <string>
#include <vector>

using occur_t = std::vector<int>;
using freq_t = std::vector<double>;

// Fonctions pour casser le chiffrement de César.
//
namespace crack {

  // Compte les occurrences de chaque lettre de l'alphabet dans un texte.
  //
  occur_t compute_occurrences(const std::string & text);

  // Calcule la fréquence d'apparition de chaque lettre dans un texte.
  //
  freq_t compute_frequencies(const std::string & text);

  // Calcule le chi-carré pour les fréquences d'un texte données.
  //
  // observed_frequencies: fréquences des lettres dans le texte testé
  //
  double compute_chi_squared(const freq_t & observed_frequencies);

  // Casse le chiffrement de César.
  //
  // Implémente une attaque par force-brute, en testant toutes les clés de
  // chiffrement possibles.
  //
  // precondition: Considère que le texte est en français.
  //
  // encrypted_text: texte chiffré
  //
  // retourne clé de chiffrement la plus probable
  //
  int crack_caesar_cipher(const std::string & encrypted_text);

} // crack

