#include "code.hpp"
#include "crack.hpp"

#include <fstream>
#include <iostream>

std::string read_file(const std::string & filename) {
  // open file
  std::ifstream ifs(filename);
  if (not ifs.is_open()) {
      std::cerr << "Error opening " << filename << std::endl;
      exit(-1);
  }

  // read all data
  std::istreambuf_iterator<char> it(ifs.rdbuf());
  std::istreambuf_iterator<char> eos;
  return std::string(it, eos);
}

void usage(const char * programName) {
  std::cerr << "Usage: " << programName << " <command> <input_file>" << std::endl;
  std::cerr << "command:" << std::endl;
  std::cerr << "  - encode <key>" << std::endl;
  std::cerr << "  - decode <key>" << std::endl;
  std::cerr << "  - crack" << std::endl;
}

int main(int argc, char *argv[]) {

  // TODO main, code

  // TODO main, decode

  // TODO main, crack

  return 0;
}

