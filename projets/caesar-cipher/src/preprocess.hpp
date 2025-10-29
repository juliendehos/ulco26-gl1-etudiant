#pragma once

#include <string>

// Fonctions pour nettoyer un texte, afin de pouvoir le chiffrer
// ensuite.
//
namespace preprocess {

  // Nettoie un caractère.
  //
  // Supprime un éventuel accent et transforme en minuscule. Retourne `0` si
  // le caractère donné est invalide (caractère spécial, chiffre...)
  //
  wchar_t normalize_char(wchar_t c) ;

  // Nettoie un texte.
  //
  // Transforme toutes les lettres en minuscules non-accentuées et supprime
  // les autres caractères (chiffres, caractères spéciaux...).
  //
  std::wstring normalize_text(const std::wstring & input);

} // preprocess

