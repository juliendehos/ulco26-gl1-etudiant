
#include "plot.hpp"

#include <matplot/matplot.h>

void plotArea(const std::string & filename, const Data & data, const std::string & title) {
  auto fig = matplot::figure();
  matplot::pie(data._values, data._labels);
  fig->draw();
  fig->title(title);
  fig->save(filename);
}

