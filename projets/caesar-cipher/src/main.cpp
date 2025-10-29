#include "code.hpp"
#include "crack.hpp"
#include "preprocess.hpp"

#include <codecvt>
#include <cwctype>
#include <fstream>
#include <locale>
#include <iostream>

std::wstring read_file(const std::string & filename) {
  // open file
  std::ifstream ifs(filename);
  if (not ifs.is_open()) {
      std::cerr << "Error opening " << filename << std::endl;
      exit(-1);
  }

  // read all data
  std::istreambuf_iterator<char> it(ifs.rdbuf());
  std::istreambuf_iterator<char> eos;
  std::string input8(it, eos);

  // convert to wstring
  std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> utf8To16;
  return utf8To16.from_bytes(input8);
}

void usage(const char * programName) {
  std::cerr << "Usage: " << programName << " <command> <input_file>" << std::endl;
  std::cerr << "command:" << std::endl;
  std::cerr << "  - code <key>" << std::endl;
  std::cerr << "  - decode <key>" << std::endl;
  std::cerr << "  - crack" << std::endl;
}

int main(int argc, char *argv[]) {

  // TODO main, code

  // TODO main, decode

  // TODO main, crack

  return 0;
}

