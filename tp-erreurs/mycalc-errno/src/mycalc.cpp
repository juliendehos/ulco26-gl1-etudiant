
#include "error.hpp"
#include "eval.hpp"
#include "parse.hpp"

#include <iostream>

void printError() {
  switch (mycalc_error) {
    case MycalcError::Domain:
      std::cerr << "domain error" << std::endl;
      break;
    case MycalcError::Parse:
      std::cerr << "parse error" << std::endl;
      break;
    case MycalcError::Eval:
      std::cerr << "evaluation error" << std::endl;
      break;
    case MycalcError::None:
      std::cerr << "no error" << std::endl;
      break;
  };
}

int main() {

  std::string input;

  while (true) {
    std::cout << "> ";
    std::flush(std::cout);
    if (not std::getline(std::cin, input) or input.empty())
      break;

    const auto tokens = tokenize(input);
    if (tokens.empty()) {
      printError();
    }
    else {
      const int result = eval(tokens);
      if (result == min_int) {
        printError();
      }
      else {
        std::cout << result << std::endl;
      }
    }
  }

  return 0;
}


