#pragma once

#include <list>
#include <string>

// Définit les types de tokens possibles.
enum class TokenType {
  Add,
  Mul,
  Fibo,
  Sqrt,
  Number
};

// Définit un Token (c'est-à-dire son texte d'entrée et son type).
struct Token {
  std::string _value;
  TokenType _type;
};

// Découpe un texte d'entrée en une liste de tokens.
// La liste est renversée (les derniers tokens de l'entrée sont en premiers
// dans la liste).
// En cas d'erreur de parsing, retourne une liste vide et met mycalc_error à
// MycalcError::Parse.
std::list<Token> tokenize(const std::string & input);

