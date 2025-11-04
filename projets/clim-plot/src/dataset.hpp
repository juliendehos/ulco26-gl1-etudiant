#pragma once

#include <csv.hpp>

#include <map>
#include <set>
#include <vector>

// exceptions
enum class DatasetError {
  // erreur de lecture du fichier de données
  ReaderError,

  // le fichier de données ne contient pas de stations de mesure
  NoStation,

  // la station de mesure n'existe pas ou ne contient pas de données
  NoData
};

// stocke les données d'une année (pour le calcul de moyenne annuelle)
struct data_t {
  double _sum;
  int _count;
};

// stocke les données pour les différentes années
using dataset_t = std::map<int, data_t>;

// ajoute une valeur dans le dataset, à l'année correspondante
void addValue(
    dataset_t & dataset,
    int aaaamm,
    double value);

// ouvre un fichier de données
csv::CSVReader createReader(
    const std::string & dataset_csv);

// récupère les stations de mesures
std::set<std::string> getStations(
    const std::string & dataset_csv);

// génère un graphique des températures annuelles moyennes d'une station de
// mesure
void plotTemperatures(
    const std::string & dataset_csv,
    const std::string & station,
    const std::string & output_image);

