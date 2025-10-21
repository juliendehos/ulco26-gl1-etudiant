
#include "error.hpp"
#include "eval.hpp"
#include "parse.hpp"

#include <iostream>
#include <string>

void printError(MycalcError err) {
  switch (err) {
    case MycalcError::Domain:
      std::cerr << "domain error" << std::endl;
      break;
    case MycalcError::Parse:
      std::cerr << "parse error" << std::endl;
      break;
    case MycalcError::Eval:
      std::cerr << "evaluation error" << std::endl;
      break;
  };
}

int main() {

  std::string input;

  while (true) {
    try {
      std::cout << "> ";
      std::flush(std::cout);
      if (not std::getline(std::cin, input) or input.empty())
        break;
      const auto tokens = tokenize(input);
      const int result = eval(tokens);
      std::cout << result << std::endl;
    }
    catch (MycalcError err) {
      printError(err);
    }
    catch (...) {
      std::cerr << "unexpected exception" << std::endl;
    }
  }

  return 0;
}


