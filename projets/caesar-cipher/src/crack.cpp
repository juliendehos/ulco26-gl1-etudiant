#include "code.hpp"
#include "crack.hpp"

#include <limits>

const freq_t french_frequencies = {
  0.0746,
  0.0114,
  0.0324,
  0.0367,
  0.1444,
  0.0111,
  0.0123,
  0.0111,
  0.0664,
  0.0034,
  0.0029,
  0.0496,
  0.0262,
  0.0639,
  0.0507,
  0.0249,
  0.0065,
  0.0607,
  0.0651,
  0.0592,
  0.0454,
  0.0111,
  0.0017,
  0.0038,
  0.0046,
  0.001
};

const int alphabet_size = french_frequencies.size();

occur_t crack::compute_occurrences(const std::string & text) {

  // TODO crack::compute_occurrences

  return {};
}

freq_t crack::compute_frequencies(const std::string & text) {

  // TODO crack::compute_frequencies

  return {};
}

double crack::compute_chi_squared(const freq_t & observed_frequencies) {

  // TODO crack::compute_chi_squared

  return {};
}

int crack::crack_caesar_cipher(const std::string & encrypted_text) {

  // TODO crack::crack_caesar_cipher

  return {};
}


