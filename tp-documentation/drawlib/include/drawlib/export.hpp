#pragma once

#include "image.hpp"

#include <string>

// Exporte une Image dans un fichier.
namespace Export {

  // Exporte une Image vers un fichier PNM.
  //
  // Supporte uniquement le format `P2`, c'est-à-dire les images en niveau de
  // gris et au format texte.
  //
  // img: Image à exporter.
  // filename: Nom du fichier PNM à écrire.
  bool pnm(const Image & img, const std::string & filename);

}

