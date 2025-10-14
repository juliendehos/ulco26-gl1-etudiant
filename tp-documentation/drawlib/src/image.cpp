#include <drawlib/image.hpp>

#include <cassert>

int Image::width() const {
  return _width;
}

int Image::height() const {
  return _height;
}

void Image::putPixel(int x, int y, unsigned char c) {
  if (x<0 or x>=_width or y<0 or y>=_height)
    return;
  const int k = y*_width + x;
  _data[k] = c;
}

unsigned char Image::getPixel(int x, int y) const {
  assert (x>=0 and x<_width and y>=0 and y<_height);
  const int k = y*_width + x;
  return _data[k];
}

Image::Image(int width, int height, unsigned char c) :
  _width(width),
  _height(height),
  _data(width*height, c)
{}

