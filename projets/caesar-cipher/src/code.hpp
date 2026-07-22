#pragma once

#include <string>

// Fonctions pour coder ou décoder un message selon la méthode du
// chiffrement de César.
//
// precondition: Le texte ne doit contenir que des lettres et en minuscules.
//
namespace code {

  // Décale un caractère, selon la méthode du chiffrement de César.
  //
  // c: caractère à transformer
  //
  // shift: décalage à effectuer dans l'alphabet
  //
  // retourne le caractère transformé
  //
  char shift_char(char c, int shift);

  // Code un message selon la méthode du chiffrement de César.
  //
  // text: texte à chiffrer
  //
  // shift: clé de chiffrement à utiliser
  //
  // retourne le texte chiffré
  //
  std::string encode_text(const std::string &text, int shift);

  // Décode un texte selon la méthode du chiffrement de César.
  //
  // encrypted_text: le texte chiffré
  //
  // shift: la clé de chiffrement utilisée pour chiffer encrypted_text
  //
  // retourne: le texte déchiffré
  //
  std::string decode_text(const std::string & encrypted_text, int shift);

} // code

