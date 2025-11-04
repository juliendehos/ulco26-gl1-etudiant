
#include "dataset.hpp"

#include <matplot/matplot.h>
#include <plog/Log.h>

void addValue(
    dataset_t & dataset,
    int aaaamm,
    double value) {

  int key = aaaamm / 100;
  auto iter = dataset.find(key);
  if (iter == dataset.end()) {
    dataset[key] = {value, 1};
  }
  else {
    iter->second._sum += value;
    iter->second._count++;
  }
}

csv::CSVReader createReader(
    const std::string & dataset_csv) {

  csv::CSVFormat format;
  format.delimiter(';');

  try {
    csv::CSVReader reader(dataset_csv, format);
    return reader;
  }
  catch (...) {
    throw DatasetError::ReaderError;
  }
}

std::set<std::string> getStations(
    const std::string & dataset_csv) {

  // read dataset_csv
  // TODO

  // get stations
  std::set<std::string> stations;
  // TODO
  stations.insert("foo");
  stations.insert("bar");
  stations.insert("foo");

  return stations;
}

void plotTemperatures(
    const std::string & dataset_csv,
    const std::string & station,
    const std::string & output_image) {

  // read dataset_csv
  // TODO

  // build dataset
  // TODO

  // process data
  PLOG_INFO << "processing data";
  std::vector<int> dates;
  std::vector<double> temperatures;
  // TODO

  // plot data
  auto f = matplot::figure(true);
  auto ax = matplot::gca();
  ax->plot(dates, temperatures, "b*");
  ax->xlabel("année");
  ax->ylabel("température moyenne");
  f->backend()->run_command("unset warnings");
  f->size(800, 600);
  f->title(station);
  f->draw();
  f->save(output_image);
}


