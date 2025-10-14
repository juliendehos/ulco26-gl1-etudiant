
#include <drawlib/drawlib.hpp>

int main() {

  Image img(300, 400, 255);

  Draw::rectangle(img, 10, 10, 290, 390, 0);

  Draw::circle(img, 150, 100, 50, 0);

  Draw::line(img, 150, 150, 150, 280, 0);
  Draw::line(img, 100, 200, 200, 200, 0);

  Draw::line(img, 150, 280, 100, 350, 0);
  Draw::line(img, 150, 280, 200, 350, 0);

  Export::pnm(img, "out.pnm");

  return 0;
}

