#include "preprocess.hpp"

#include <iostream>
#include <map>

const std::map<wchar_t, wchar_t> french_special_char_map = {
  {L'á', 'a'},
  {L'â', 'a'},
  {L'ä', 'a'},
  {L'à', 'a'},
  {L'ã', 'a'},
  {L'å', 'a'},
  {L'ç', 'c'},
  {L'é', 'e'},
  {L'è', 'e'},
  {L'ê', 'e'},
  {L'ë', 'e'},
  {L'í', 'i'},
  {L'ì', 'i'},
  {L'î', 'i'},
  {L'ï', 'i'},
  {L'ñ', 'n'},
  {L'ó', 'o'},
  {L'ò', 'o'},
  {L'ô', 'o'},
  {L'ö', 'o'},
  {L'õ', 'o'},
  {L'ú', 'u'},
  {L'ù', 'u'},
  {L'û', 'u'},
  {L'ü', 'u'},
  {L'Á', 'a'},
  {L'Â', 'a'},
  {L'Ä', 'a'},
  {L'À', 'a'},
  {L'Ã', 'a'},
  {L'Å', 'a'},
  {L'Ç', 'c'},
  {L'É', 'e'},
  {L'È', 'e'},
  {L'Ê', 'e'},
  {L'Ë', 'e'},
  {L'Í', 'i'},
  {L'Ì', 'i'},
  {L'Î', 'i'},
  {L'Ï', 'i'},
  {L'Ñ', 'n'},
  {L'Ó', 'o'},
  {L'Ò', 'o'},
  {L'Ô', 'o'},
  {L'Ö', 'o'},
  {L'Õ', 'o'},
  {L'Ú', 'u'},
  {L'Ù', 'u'},
  {L'Û', 'u'},
  {L'Ü', 'u'}
};

wchar_t preprocess::normalize_char(wchar_t c) {
  auto it = french_special_char_map.find(c);
  if (it != french_special_char_map.end()) {
      return it->second;
  }
  auto c2 = std::tolower(c);
  if (c2 >= L'a' and c2 <= L'z') {
    return c2;
  }
  return 0;
}

std::wstring preprocess::normalize_text(const std::wstring & input) {

  // TODO preprocess::normalize_text

  return {};
}

