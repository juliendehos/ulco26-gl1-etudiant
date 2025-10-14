#pragma once

#include <vector>

// Permet de construire une image en niveau de gris et de lire/écrire un pixel.
//
// Les coordonnées sont données à partir du point en haut à gauche et
// commencent à la valeur zéro.
class Image {

  private:
    int _width;
    int _height;
    std::vector<unsigned char> _data;

  public:

    // Largeur de l'image.
    int width() const;

    // Hauteur de l'image.
    int height() const;

    // Constructeur d'Image.
    //
    // **Attention, les tailles ne sont pas vérifiés**.
    //
    // width: Largeur de l'image.
    // height: Hauteur de l'image.
    // c: Couleur de fond initiale.
    Image(int width, int height, unsigned char c);

    // Écrit un pixel.
    //
    // Ne fait rien si la position du pixel n'est pas valide.
    //
    // x: Abscisse du pixel.
    // y: Ordonnée du pixel.
    // c: couleur du pixel.
    void putPixel(int x, int y, unsigned char c);

    // \brief Lit un pixel.
    //
    // x: Abscisse du pixel.
    // y: Ordonnée du pixel.
    // precondition: La position du pixel doit ètre valide.
    unsigned char getPixel(int x, int y) const;

};

