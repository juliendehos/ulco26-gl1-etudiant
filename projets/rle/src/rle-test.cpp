
#include "rle.hpp"

#include <catch2/catch_test_macros.hpp>

#include <sstream>

///////////////////////////////////////////////////////////////////////////////
// rle::compress_line
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("compress_line nominal", "[rle]") {
  const std::string input = "foo foo 42 bar bar bar\n";
  const std::string expected = "2 foo 1 42 3 bar\n";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress_line(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}

TEST_CASE ("compress_line one word", "[rle]") {
  const std::string input = "P2\n";
  const std::string expected = "1 P2\n";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress_line(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}

TEST_CASE ("compress_line empty line", "[rle]") {
  const std::string input = "";
  const std::string expected = "";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress_line(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}
*/

///////////////////////////////////////////////////////////////////////////////
// rle::compress
///////////////////////////////////////////////////////////////////////////////

/*
TEST_CASE ("compress nominal", "[rle]") {
  const std::string input = "foo foo\n42\nbar bar bar\n";
  const std::string expected = "2 foo\n1 42\n3 bar\n";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}

TEST_CASE ("compress one line", "[rle]") {
  const std::string input = "foo foo\n";
  const std::string expected = "2 foo\n";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}

TEST_CASE ("compress empty string", "[rle]") {
  const std::string input = "";
  const std::string expected = "";
  std::istringstream iss(input);
  std::ostringstream oss;
  rle::compress(iss, oss);
  const auto result = oss.str();
  REQUIRE( result == expected );
}
*/

///////////////////////////////////////////////////////////////////////////////
// rle::decompress_line
///////////////////////////////////////////////////////////////////////////////

// TODO

///////////////////////////////////////////////////////////////////////////////
// rle::decompress
///////////////////////////////////////////////////////////////////////////////

// TODO

