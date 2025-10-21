
#include "error.hpp"
#include "eval.hpp"
#include "parse.hpp"

#include <iostream>

void logError(MycalcError err) {
  switch (err) {
    case MycalcError::Domain:
      std::cerr << "erreur: " << "domain error" << std::endl;
      break;
    case MycalcError::Parse:
      std::cerr << "erreur: " << "parse error" << std::endl;
      break;
    case MycalcError::Eval:
      std::cerr << "erreur: " << "evaluation error" << std::endl;
      break;
  };
}

int main() {

  ////////////////////////////////////////////////////////////////////////
  // myfibo
  ////////////////////////////////////////////////////////////////////////

  // TODO gestion d'erreur
  const auto f10 = myfibo(10);
  std::cout << "myfibo(10) = " << f10 << std::endl;

  // TODO gestion d'erreur
  const auto f100 = myfibo(100);
  std::cout << "myfibo(100) = " << f100 << std::endl;

  // TODO gestion d'erreur
  const auto fm12 = myfibo(-12);
  std::cout << "myfibo(-12) = " << fm12 << std::endl;

  ////////////////////////////////////////////////////////////////////////
  // mysqrt
  ////////////////////////////////////////////////////////////////////////

  // TODO gestion d'erreur
  const auto sm12 = mysqrt(-12);
  std::cout << "mysqrt(-12) = " << sm12 << std::endl;

  // TODO gestion d'erreur
  const auto s12 = mysqrt(12);
  std::cout << "mysqrt(12) = " << s12 << std::endl;

  ////////////////////////////////////////////////////////////////////////
  // tokenize
  ////////////////////////////////////////////////////////////////////////

  // TODO gestion d'erreur
  const auto tokens1 = tokenize("toto");
  std::cout << "tokens1 ok" << std::endl;

  // TODO gestion d'erreur
  const auto tokens2 = tokenize("+ 1 2");
  std::cout << "tokens2 ok" << std::endl;

  ////////////////////////////////////////////////////////////////////////
  // eval
  ////////////////////////////////////////////////////////////////////////

  // TODO gestion d'erreur
  const auto eval1 = eval(tokenize("+ 1 2"));
  std::cout << "eval1 = " << eval1 << std::endl;

  // TODO gestion d'erreur
  const auto eval2 = eval(tokenize("+ 1 * 2 3"));
  std::cout << "eval2 = " << eval2 << std::endl;

  // TODO gestion d'erreur
  const auto eval3 = eval(tokenize("+ 1 sqrt 12"));
  std::cout << "eval3 = " << eval3 << std::endl;

  // TODO gestion d'erreur
  const auto eval4 = eval(tokenize("42 + 1 sqrt 12"));
  std::cout << "eval4 = " << eval4 << std::endl;

  return 0;
}

