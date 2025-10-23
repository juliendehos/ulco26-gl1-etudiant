#pragma once

#include <list>
#include <string>

// Définit les types de tokens possibles.
enum class TokenType {
  Add,
  Sub,
  Mul,
  Div,
  Sqrt,
  Number
};

// Définit un Token (c'est-à-dire son type et, si c'est un nombre, sa valeur).
struct Token {
  TokenType _type;
  double _number;
};

// Découpe un texte d'entrée en une liste de tokens.
// La liste est renversée (les derniers tokens de l'entrée sont en premiers
// dans la liste).
// En cas d'erreur de parsing, lève une exception MycalcError::Parse.
std::list<Token> tokenize(const std::string & input);

