#include "preprocess.hpp"

#include <catch2/catch_test_macros.hpp>

///////////////////////////////////////////////////////////////////////////////
// preprocess::normalize_char
///////////////////////////////////////////////////////////////////////////////

TEST_CASE("normalize_char accent", "[preprocess]") {
  REQUIRE(preprocess::normalize_char(L'à') == 'a');
  REQUIRE(preprocess::normalize_char(L'ç') == 'c');
  REQUIRE(preprocess::normalize_char(L'é') == 'e');
}

TEST_CASE("normalize_char accent + majuscule", "[preprocess]") {
  REQUIRE(preprocess::normalize_char(L'À') == 'a');
  REQUIRE(preprocess::normalize_char(L'Ç') == 'c');
  REQUIRE(preprocess::normalize_char(L'É') == 'e');
}

TEST_CASE("normalize_char majuscule", "[preprocess]") {
  REQUIRE(preprocess::normalize_char('A') == 'a');
  REQUIRE(preprocess::normalize_char('C') == 'c');
  REQUIRE(preprocess::normalize_char('E') == 'e');
}

TEST_CASE("normalize_char minuscule ok", "[preprocess]") {
  REQUIRE(preprocess::normalize_char('a') == 'a');
  REQUIRE(preprocess::normalize_char('c') == 'c');
  REQUIRE(preprocess::normalize_char('e') == 'e');
}

TEST_CASE("normalize_char invalides", "[preprocess]") {
  REQUIRE(preprocess::normalize_char('1') == 0);
  REQUIRE(preprocess::normalize_char('\n') == 0);
  REQUIRE(preprocess::normalize_char(' ') == 0);
  REQUIRE(preprocess::normalize_char('.') == 0);
}

///////////////////////////////////////////////////////////////////////////////
// preprocess::normalize_text
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE("normalize_text removes accents and non-letter characters, and converts to lowercase", "[preprocess]") {
  std::wstring input = L"Élève! Ça va bien? 123";
  std::wstring expected_output = L"elevecavabien";
  REQUIRE(preprocess::normalize_text(input) == expected_output);
}

TEST_CASE("normalize_text handles empty string", "[preprocess]") {
  std::wstring input = L"";
  std::wstring expected_output = L"";
  REQUIRE(preprocess::normalize_text(input) == expected_output);
}

TEST_CASE("normalize_text handles string with only non-letter characters", "[preprocess]") {
  std::wstring input = L"1234!@#$%^&*()";
  std::wstring expected_output = L"";
  REQUIRE(preprocess::normalize_text(input) == expected_output);
}

TEST_CASE("normalize_text handles string with mixed case and accents", "[preprocess]") {
  std::wstring input = L"ÀÁÂÃÄÅ ÇÉÈÊË ÍÌÎÏ ÑÓÒÔÕÖ ÚÙÛÜ";
  std::wstring expected_output = L"aaaaaaceeeeiiiinooooouuuu";
  REQUIRE(preprocess::normalize_text(input) == expected_output);
}

TEST_CASE("normalize_text handles string with no accents or non-letter characters", "[preprocess]") {
  std::wstring input = L"HelloWorld";
  std::wstring expected_output = L"helloworld";
  REQUIRE(preprocess::normalize_text(input) == expected_output);
}
*/

