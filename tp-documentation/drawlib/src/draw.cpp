#include <drawlib/draw.hpp>

#include <cmath>

void Draw::line(Image & img, int x0, int y0, int x1, int y1, unsigned char c) {
  const int dx = std::abs(x1 - x0);
  const int dy = std::abs(y1 - y0);
  if (dx > dy) {
    if (x0 < x1) {
      // parcours x0 vers x1
      for (int x=x0; x<=x1; x++) {
        const double d = double(y1-y0) / double(x1-x0);
        const int Dx = x - x0;
        const int y = y0 + Dx*d;
        img.putPixel(x, y, c);
      }
    }
    else {
      // parcours x1 vers x0
      for (int x=x1; x<=x0; x++) {
        const double d = double(y0-y1) / double(x0-x1);
        const int Dx = x - x1;
        const int y = y1 + Dx*d;
        img.putPixel(x, y, c);
      }
    }
  }
  else {
    if (y0 < y1) {
      // parcours y0 vers y1
      for (int y=y0; y<=y1; y++) {
        const double d = double(x1-x0) / double(y1-y0);
        const int Dy = y - y0;
        const int x = x0 + Dy*d;
        img.putPixel(x, y, c);
      }
    }
    else {
      // parcours y1 vers y0
      for (int y=y1; y<=y0; y++) {
        const double d = double(x0-x1) / double(y0-y1);
        const int Dy = y - y1;
        const int x = x1 + Dy*d;
        img.putPixel(x, y, c);
      }
    }
  }
}

void Draw::rectangle(Image & img, int x0, int y0, int x1, int y1, unsigned char c) {
  if (x0>x1)
    rectangle(img, x1, y0, x0, y1, c);

  if (y0>y1)
    rectangle(img, x0, y1, x1, y0, c);

  for (int x=x0; x<=x1; x++) {
    img.putPixel(x, y0, c);
    img.putPixel(x, y1, c);
  }

  for (int y=y0; y<=y1; y++) {
    img.putPixel(x0, y, c);
    img.putPixel(x1, y, c);
  }
}

void Draw::circle(Image & img, int x, int y, double r, unsigned char c) {
  const double r2 = r*r;
  for (double a=0; a<=r; a+=1.0) {
    const double b = std::sqrt(r2 - a*a);
    img.putPixel(x+a, y+b, c);
    img.putPixel(x-a, y+b, c);
    img.putPixel(x+a, y-b, c);
    img.putPixel(x-a, y-b, c);
    img.putPixel(x+b, y+a, c);
    img.putPixel(x-b, y+a, c);
    img.putPixel(x+b, y-a, c);
    img.putPixel(x-b, y-a, c);
  }
}

