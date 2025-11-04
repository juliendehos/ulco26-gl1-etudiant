
#include "dataset.hpp"

#include <plog/Log.h>
#include <plog/Initializers/ConsoleInitializer.h>
#include <plog/Initializers/RollingFileInitializer.h>

#include <iostream>

void usage() {
  std::cout << "usage:" << std::endl;
  std::cout << " - stations" << std::endl;
  std::cout << " - temp <station> <output image>" << std::endl;
  exit(-1);
}

int main(int argc, char ** argv) {

  const std::string DATASET_CSV = "data/MENSQ_62_previous-1950-2023.csv";

  // TODO

  auto reader = createReader(DATASET_CSV);
  for (const auto & row : reader) {
    std::cout << row["NUM_POSTE"].get<std::string>() << " ";
  }
  std::cout << std::endl;

  return 0;
}


