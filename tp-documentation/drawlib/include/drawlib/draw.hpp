#pragma once

#include "image.hpp"

// Module de dessin dans une Image.
// TODO Implémentez le dessin de textes.
namespace Draw {

  // Dessine une ligne.
  //
  // img: Image dans laquelle dessiner.
  // x0: Abscisse du point initial.
  // y0: Ordonnée du point initial.
  // x1: Abscisse du point final.
  // y1: Ordonnée du point final.
  // c: Couleur de la ligne.
  void line(Image & img, int x0, int y0, int x1, int y1, unsigned char c);

  // Dessine un rectangle.
  //
  // Le rectangle est défini par deux points. Pas de précondition particulière
  // sur la position de ces deux points.
  //
  // img: Image dans laquelle dessiner.
  // x0: Abscisse du point initial.
  // y0: Ordonnée du point initial.
  // x1: Abscisse du point final.
  // y1: Ordonnée du point final.
  // c: Couleur du rectangle.
  void rectangle(Image & img, int x0, int y0, int x1, int y1, unsigned char c);

  // Dessine un cercle.
  //
  // img: Image dans laquelle dessiner.
  // x: Abscisse du centre du cercle.
  // y: Ordonnée du centre du cercle.
  // r: Rayon du cercle.
  // c: Couleur du cercle.
  void circle(Image & img, int x, int y, double r, unsigned char c);

}

