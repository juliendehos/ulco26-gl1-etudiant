
#include "error.hpp"
#include "parse.hpp"

#include <iostream>
#include <sstream>

bool isNumber(const std::string & input) {
  
  auto iter = input.begin();

  // input peut commencer par le signe -
  if (iter != input.end() and *iter == '-')
    iter++;

  // input doit contenir au moins un chiffre
  if (iter == input.end() or not std::isdigit(*iter))
    return false;

  // les caractères suivants doivent être des chiffres
  while (++iter != input.end()) {
    if (not std::isdigit(*iter))
      return false;
  }

  return true;
}

std::list<Token> tokenize(const std::string & input) {
  std::list<Token> tokens;
  std::istringstream iss(input);
  std::string tokVal;
  TokenType tokType;

  while (iss >> tokVal) {
    if (tokVal == "+") tokType = TokenType::Add;
    else if (tokVal == "*") tokType = TokenType::Mul;
    else if (tokVal == "fibo") tokType = TokenType::Fibo;
    else if (tokVal == "sqrt") tokType = TokenType::Sqrt;
    else if (isNumber(tokVal)) tokType = TokenType::Number;
    else {
      // TODO générer une erreur MycalcError::Parse
    }

    tokens.push_front({tokVal, tokType});
  }

  return tokens;
}

