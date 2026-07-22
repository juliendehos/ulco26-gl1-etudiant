#include "code.hpp"
#include "crack.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

///////////////////////////////////////////////////////////////////////////////
// crack::compute_occurrences
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE("compute_occurrences works correctly", "[crack]") {
  std::string text = "abacaba";
  occur_t occurrences = crack::compute_occurrences(text);
  REQUIRE(occurrences[0] == 4); // 'a'
  REQUIRE(occurrences[1] == 2); // 'b'
  REQUIRE(occurrences[2] == 1); // 'c'
  for (size_t i = 3; i < occurrences.size(); ++i) {
    REQUIRE(occurrences[i] == 0);
  }
}
*/

///////////////////////////////////////////////////////////////////////////////
// crack::compute_frequencies
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE("compute_frequencies works correctly", "[crack]") {
  std::string text = "aaabbc";
  freq_t frequencies = crack::compute_frequencies(text);
  REQUIRE_THAT(frequencies[0], Catch::Matchers::WithinAbs(0.5, 0.01)); // 'a'
  REQUIRE_THAT(frequencies[1], Catch::Matchers::WithinAbs(0.33, 0.01)); // 'b'
  REQUIRE_THAT(frequencies[2], Catch::Matchers::WithinAbs(0.16, 0.01)); // 'c'
  for (size_t i = 3; i < frequencies.size(); ++i) {
    REQUIRE_THAT(frequencies[i], Catch::Matchers::WithinAbs(0, 0.01));
  }
}
*/

///////////////////////////////////////////////////////////////////////////////
// crack::crack_caesar_cipher
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE("crack_caesar_cipher and decode_text work correctly", "[crack]") {
  std::string original_text = "bonjour je suis une phrase en francais";
  std::string final_text = "bonjourjesuisunephraseenfrancais";
  int shift = 5;
  std::string encrypted_text = code::encode_text(original_text, shift);

  int detected_shift = crack::crack_caesar_cipher(encrypted_text);
  REQUIRE(detected_shift == shift);

  std::string decrypted_text = code::decode_text(encrypted_text, detected_shift);
  REQUIRE(decrypted_text == final_text);
}
*/

