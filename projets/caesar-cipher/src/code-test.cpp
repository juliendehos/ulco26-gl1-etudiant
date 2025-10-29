#include "code.hpp"

#include <catch2/catch_test_macros.hpp>

///////////////////////////////////////////////////////////////////////////////
// code::shift_char
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Shift character within alphabet", "[code]") {
  wchar_t inputChar = L'a';
  int shift = 3;
  wchar_t expectedOutput = L'd';

  wchar_t shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}

TEST_CASE ("Shift character with wrap-around", "[code]") {
  wchar_t inputChar = L'z';
  int shift = 2;
  wchar_t expectedOutput = L'b';

  wchar_t shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}

TEST_CASE ("Shift non-alphabet character", "[code]") {
  wchar_t inputChar = L' ';
  int shift = 5;
  wchar_t expectedOutput = L' ';

  wchar_t shiftedChar = code::shift_char(inputChar, shift);
  REQUIRE(shiftedChar == expectedOutput);
}
*/

///////////////////////////////////////////////////////////////////////////////
// code::encode_text
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Encode text with Caesar cipher", "[code]") {
  std::wstring input = L"hello world";
  int shift = 3;
  std::wstring expectedOutput = L"khoor zruog";

  std::wstring encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with negative shift", "[code]") {
  std::wstring input = L"khoor zruog";
  int shift = -3;
  std::wstring expectedOutput = L"hello world";

  std::wstring encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with wrap-around", "[code]") {
  std::wstring input = L"xyz";
  int shift = 4;
  std::wstring expectedOutput = L"bcd";

  std::wstring encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with non-alphabet characters", "[code]") {
  std::wstring input = L"hello, world!";
  int shift = 2;
  std::wstring expectedOutput = L"jgnnq, yqtnf!";

  std::wstring encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
}

TEST_CASE ("Encode text with zero shift", "[code]") {
  std::wstring input = L"sample text";
  int shift = 0;
  std::wstring expectedOutput = L"sample text";

  std::wstring encodedText = code::encode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
} 
*/

///////////////////////////////////////////////////////////////////////////////
// code::decode_text
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("Decode text with Caesar cipher", "[code]") {
  std::wstring input = L"khoor zruog";
  int shift = 3;
  std::wstring expectedOutput = L"hello world";

  std::wstring encodedText = code::decode_text(input, shift);
  REQUIRE(encodedText == expectedOutput);
} 

TEST_CASE("decode_text works correctly", "[code]") {
  std::wstring original_text = L"exemple de texte a decoder";
  int shift = 3;
  std::wstring encrypted_text = code::encode_text(original_text, shift);
  std::wstring decrypted_text = code::decode_text(encrypted_text, shift);
  REQUIRE(decrypted_text == original_text);
}
*/

