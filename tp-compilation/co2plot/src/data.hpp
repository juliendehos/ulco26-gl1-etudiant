#pragma once

#include <string>
#include <vector>

struct Data {
  std::vector<std::string> _labels;
  std::vector<double> _values;
};

Data loadData(const std::string & filename, unsigned area);

