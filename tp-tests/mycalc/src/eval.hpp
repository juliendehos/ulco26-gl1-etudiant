#pragma once

#include "parse.hpp"

// Évalue une expression (donnée par sa liste renversée de tokens).
// En cas d'échec, lève une exception MycalcError::Eval ou MycalcError::Parse.
double eval(const std::list<Token> & tokens);

