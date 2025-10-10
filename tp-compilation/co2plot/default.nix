{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "co2plot";
  src = ./.;

  buildInputs = with pkgs; [
    armadillo
    cmake
    pkg-config
  ];

}

