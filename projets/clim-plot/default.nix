{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "clim-plot";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
    git
    gnuplot
    openblas
    pkg-config
    plog
  ];

}

