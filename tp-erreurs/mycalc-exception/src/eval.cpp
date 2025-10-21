
#include "error.hpp"
#include "eval.hpp"

#include <cassert>
#include <cerrno>
#include <cmath>
#include <stack>

///////////////////////////////////////////////////////////////////////////////
// myfibo
///////////////////////////////////////////////////////////////////////////////

int go_fibo(int k, int fkm1, int fkm2) {

  // TODO vérifier fkm1 et fkm2 (sinon: lever une exception MycalcError::Domain)

  assert(fkm1 >= fkm2);

  if (k <= 0) {
    return fkm2;
  }
  else {
    return go_fibo(k-1, fkm1+fkm2, fkm1);
  }
}

int myfibo(int n) {
  // TODO vérifier que n est positif ou nul (sinon: lever une exception MycalcError::Domain)
  return go_fibo(n, 1, 0);
}

///////////////////////////////////////////////////////////////////////////////
// mysqrt
///////////////////////////////////////////////////////////////////////////////

int mysqrt(int n) {
  const double x = double(n);
  const double y = std::sqrt(x);
  // TODO vérifier que sqrt a bien foncitonné (sinon: lever une exception MycalcError::Domain)
  return int(y);
}

///////////////////////////////////////////////////////////////////////////////
// eval
///////////////////////////////////////////////////////////////////////////////

int eval(const std::list<Token> & tokens) {

  std::stack<int> s;

  for (const Token & t : tokens) {

    switch (t._type) {

      case TokenType::Add:
        // TODO vérifier que s contient au moins 2 éléments (sinon: MycalcError::Eval)
        {
          const int b = s.top();
          s.pop();
          const int a = s.top();
          s.pop();
          s.push(a+b);
        }
        break;

      case TokenType::Mul:
        // TODO vérifier que s contient au moins 2 éléments (sinon: MycalcError::Eval)
        {
          const int b = s.top();
          s.pop();
          const int a = s.top();
          s.pop();
          s.push(a*b);
        }
        break;

      case TokenType::Fibo:
        // TODO vérifier que s contient au moins 1 élément (sinon: MycalcError::Eval)
        {
          const int n = s.top();
          s.pop();
          s.push(myfibo(n));
        }
        break;

      case TokenType::Sqrt:
        // TODO vérifier que s contient au moins 1 élément (sinon: MycalcError::Eval)
        {
          const int n = s.top();
          s.pop();
          s.push(mysqrt(n));
        }
        break;

      case TokenType::Number:
        // TODO vérifier que stoi a bien foncitonné (sinon: MycalcError::Parse)
        {
          const int n = std::stoi(t._value);
          s.push(n);
        }
        break;

    }

  }

  // TODO vérifier que s contient 1 et 1 seul élément (sinon: MycalcError::Eval)
  return s.top();

}

