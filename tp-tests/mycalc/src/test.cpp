
#include "error.hpp"
#include "eval.hpp"
#include "parse.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_translate_exception.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>

#include <cmath>

////////////////////////////////////////////////////////////////////////
// helpers
////////////////////////////////////////////////////////////////////////

// TODO CATCH_TRANSLATE_EXCEPTION( MycalcError const & err ) 

bool operator==(Token const & t1, Token const & t2) {
  // TODO comparer les _number à un epsilon près (0.001)
  return t1._type == t2._type and t1._number == t2._number;
}

////////////////////////////////////////////////////////////////////////
// tokenize
////////////////////////////////////////////////////////////////////////

TEST_CASE( "tokens", "[tokenize]" ) {
  // TODO tokenize("+")
  // TODO tokenize("-")
  // TODO tokenize("*")
  // TODO tokenize("/")
  // TODO tokenize("sqrt")
  // TODO tokenize("1")
  // TODO tokenize("42")
  // TODO tokenize("4.2")
  // TODO tokenize("-1")
  // TODO tokenize("-42")
  // TODO tokenize("-4.2")
}

TEST_CASE( "token exception 1", "[tokenize]" ) {
  // TODO vérifier que tokenize("foobar") lève une exception
  // MycalcError::Parse, en utilisant un try/catch
  
}

TEST_CASE( "token exception 2", "[tokenize]" ) {
  // TODO vérifier que tokenize("foobar") lève une exception
  // MycalcError::Parse, en utilisant un REQUIRE_THROWS_WITH
}

TEST_CASE( "invalid tokens", "[tokenize]" ) {
  // TODO tokenize("4foo")

  // TODO tokenize("4.2.0")

}

TEST_CASE( "+ 1 2", "[tokenize]" ) {
  // TODO tokenize("+ 1 2")
}

TEST_CASE( "- 1 * 2 3", "[tokenize]" ) {
  // TODO tokenize("- 1 * 2 3")
}

TEST_CASE( "/ 1 sqrt -2", "[tokenize]" ) {
  // TODO tokenize("/ 1 sqrt -2")
}

////////////////////////////////////////////////////////////////////////
// eval
////////////////////////////////////////////////////////////////////////

TEST_CASE( "sqrt", "[eval]" ) {

  // TODO eval(tokenize("sqrt 2"))
  // utiliser REQUIRE_THAT + Catch::Matchers::WithinAbs

  // TODO eval(tokenize("sqrt"))

  // TODO eval(tokenize("sqrt -1"))

}

TEST_CASE( "operators", "[eval]" ) {

  // TODO eval(tokenize("+ 1 2"))

  // TODO eval(tokenize("- 1 2"))

  // TODO eval(tokenize("* 21 2"))

  // TODO eval(tokenize("/ 84 2"))

}

TEST_CASE( "divide by 0", "[eval]" ) {
  // TODO eval(tokenize("/ 1 0"))

  // TODO eval(tokenize("/ 0 0"))

  // TODO eval(tokenize("/ 0 1"))

}

TEST_CASE( "expressions ok", "[eval]" ) {

  // TODO eval(tokenize("+ 1 * 2 3"))

  // TODO eval(tokenize("- * 2 3 1"))

  // TODO eval(tokenize("/ sqrt * 8 2 5"))

  // TODO eval(tokenize("sqrt * + 1 2 3"))

}

TEST_CASE( "expressions ko", "[eval]" ) {
  // TODO eval(tokenize("+ 1 2 3"))

  // TODO eval(tokenize("1 + 2 3"))

  // TODO eval(tokenize("sqrt"))

  // TODO eval(tokenize("/"))

}

