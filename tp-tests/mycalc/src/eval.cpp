
#include "error.hpp"
#include "eval.hpp"

#include <cassert>
#include <cerrno>
#include <cmath>
#include <stack>

double eval(const std::list<Token> & tokens) {

  std::stack<double> s;

  for (const Token & t : tokens) {

    switch (t._type) {

      case TokenType::Add:
        if (s.size() < 2) {
          throw MycalcError::Eval;
        }
        else {
          const double a = s.top();
          s.pop();
          const double b = s.top();
          s.pop();
          s.push(a+b);
        }
        break;

      case TokenType::Sub:
        if (s.size() < 2) {
          throw MycalcError::Eval;
        }
        else {
          const double a = s.top();
          s.pop();
          const double b = s.top();
          s.pop();
          s.push(a+b);
        }
        break;

      case TokenType::Mul:
        if (s.size() < 2) {
          throw MycalcError::Eval;
        }
        else {
          const double a = s.top();
          s.pop();
          const double b = s.top();
          s.pop();
          s.push(a*b);
        }
        break;

      case TokenType::Div:
        if (s.size() < 2) {
          throw MycalcError::Eval;
        }
        else {
          const double a = s.top();
          s.pop();
          const double b = s.top();
          s.pop();
          const double y = a/b;
          if (std::isnan(y) or std::isinf(y)) {
            throw MycalcError::Domain;
          }
          s.push(y);
        }
        break;

      case TokenType::Sqrt:
        if (s.empty()) {
          throw MycalcError::Eval;
        }
        else {
          const double n = s.top();
          s.pop();
          const double y = std::sqrt(n);
          if (std::isnan(y)) {
            throw MycalcError::Domain;
          }
          s.push(y);
        }
        break;

      case TokenType::Number:
        {
          const double n = t._number;
          s.push(n);
        }
        break;

    }

  }

  if (s.size() != 1) {
    throw MycalcError::Eval;
  }
  else {
    return s.top();
  }

}

