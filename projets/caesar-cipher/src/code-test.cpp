#include "code.hpp"

#include <catch2/catch_test_macros.hpp>

///////////////////////////////////////////////////////////////////////////////
// code::shift_char
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Shift character within alphabet", "[code]") {
  char inputChar = 'a';
  int shift = 3;
  char expectedOutput = 'd';

  char shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}

TEST_CASE ("Shift character with wrap-around", "[code]") {
  char inputChar = 'z';
  int shift = 2;
  char expectedOutput = 'b';

  char shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}

TEST_CASE ("Shift non-alphabet character", "[code]") {
  char inputChar = ' ';
  int shift = 5;
  char expectedOutput = 0;

  char shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}
*/

///////////////////////////////////////////////////////////////////////////////
// code::encode_text
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Encode text with Caesar cipher", "[code]") {
  std::string input = "hello world";
  int shift = 3;
  std::string expectedOutput = "khoorzruog";

  std::string encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with negative shift", "[code]") {
  std::string input = "khoor zruog";
  int shift = -3;
  std::string expectedOutput = "helloworld";

  std::string encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with wrap-around", "[code]") {
  std::string input = "xyz";
  int shift = 4;
  std::string expectedOutput = "bcd";

  std::string encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with non-alphabet characters", "[code]") {
  std::string input = "hello, world!";
  int shift = 2;
  std::string expectedOutput = "jgnnqyqtnf";

  std::string encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with zero shift", "[code]") {
  std::string input = "sample text";
  int shift = 0;
  std::string expectedOutput = "sampletext";

  std::string encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
} 
*/

///////////////////////////////////////////////////////////////////////////////
// code::decode_text
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Decode text with Caesar cipher", "[code]") {
  std::string input = "khoorzruog";
  int shift = 3;
  std::string expectedOutput = "helloworld";

  std::string encodedText = code::decode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
} 

TEST_CASE("decode_text works correctly", "[code]") {
  std::string original_text = "exemple de texte a decoder";
  std::string final_text = "exempledetexteadecoder";
  int shift = 3;
  std::string encrypted_text = code::encode_text(original_text, shift);
  std::string decrypted_text = code::decode_text(encrypted_text, shift);
  REQUIRE(decrypted_text == final_text);
}
*/

