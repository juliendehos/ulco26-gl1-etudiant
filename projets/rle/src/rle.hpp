#pragma once

#include <iostream>

// Module de compression/décompression RLE
//
// Compresse/décompresse du texte. Implémente la méthode RLE (run-length
// encoding) sur les mots d'une ligne.
//
// Par exemple, "foo foo\nbar bar bar" sera compressé en "2 foo \n3 bar \n".
//
namespace rle {

  // Compresse une ligne.
  //
  // is: flux d'entrée contenant la ligne à compresser
  //
  // os: flux de sortie oú écrire la ligne compressée
  //
  void compress_line(std::istream & is, std::ostream & os);

  // Compresse un flux complet, ligne par ligne.
  //
  // is: flux d'entrée contenant le flux à compresser
  //
  // os: flux de sortie oú écrire le flux compressée
  //
  void compress(std::istream & is, std::ostream & os);

  // Décompresse une ligne.
  //
  // is: flux d'entrée contenant la ligne à décompresser
  //
  // os: flux de sortie oú écrire la ligne décompressée
  //
  void decompress_line(std::istream & is, std::ostream & os);

  // Décompresse un flux complet, ligne par ligne.
  //
  // is: flux d'entrée contenant le flux à décompresser
  //
  // os: flux de sortie oú écrire le flux décompressée
  //
  void decompress(std::istream & is, std::ostream & os);

} // namespace rle

