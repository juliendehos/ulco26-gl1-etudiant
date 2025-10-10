
#include "data.hpp"

#include <armadillo>

Data loadData(const std::string & filename, unsigned area) {

  // load input csv
  arma::mat input;
  arma::field<std::string> header;
  input.load(arma::csv_name(filename, header));

  // labels
  const unsigned nLabels = header.n_cols - 2;
  std::vector<std::string> labels(nLabels);
  for (unsigned j=0; j<nLabels; j++) {
    labels[j] = header[j+2];
  }

  // compute data for the given area
  std::vector<double> values(nLabels, 0);
  for (unsigned i=0; i<input.n_rows; i++) {
    // check area
    const unsigned a = input(i, 0) / 1000;
    if (a == area) {
      // add values
      for (unsigned j=0; j<nLabels; j++) {
        values[j] += input(i, j+2);
      }
    }
  }

  return { labels, values };
}

