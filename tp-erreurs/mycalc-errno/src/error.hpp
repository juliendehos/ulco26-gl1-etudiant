#pragma once

#include <limits>

// Définit les erreurs possibles dans mycalc.
enum class MycalcError {
  None,
  Parse,
  Eval,
  Domain
};

// Définit une variable globale contenant le type de la dernière erreur
// rencontrée.
extern MycalcError mycalc_error;

// Valeur de retour en cas d'erreur.
const int min_int = std::numeric_limits<int>::min();

