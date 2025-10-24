#pragma once

#include "parse.hpp"

// Calcule la racine carrée de n.
// En cas d'échec (négatif), lève une exception MycalcError::Domain.
double mysqrt(double n);

// Calcule la division a / b.
// En cas d'échec (division par zéro), lève une exception MycalcError::Domain.
double mydiv(double a, double b);

// Évalue une expression (donnée par sa liste renversée de tokens).
// En cas d'échec, lève une exception MycalcError::Eval ou MycalcError::Parse.
double eval(const std::list<Token> & tokens);

