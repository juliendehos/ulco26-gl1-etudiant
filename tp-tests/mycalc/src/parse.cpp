
#include "error.hpp"
#include "parse.hpp"

#include <iostream>
#include <sstream>

std::list<Token> tokenize(const std::string & input) {

  std::list<Token> tokens;
  std::istringstream iss(input);
  std::string token;

  while (iss >> token) {
    TokenType tokType;
    double tokNumber = 0;
    if (token == "+") tokType = TokenType::Add;
    else if (token == "-") tokType = TokenType::Sub;
    else if (token == "*") tokType = TokenType::Mul;
    else if (token == "/") tokType = TokenType::Div;
    else if (token == "sqrt") tokType = TokenType::Sqrt;
    else {
      try { 
        tokType = TokenType::Number;
        std::size_t pos;
        tokNumber = std::stod(token, &pos);
        if (pos != token.size())
          throw MycalcError::Parse;
      }
      catch (...) {
        throw MycalcError::Parse;
      }
    }
    tokens.push_front({tokType, tokNumber});
  }

  return tokens;
}

