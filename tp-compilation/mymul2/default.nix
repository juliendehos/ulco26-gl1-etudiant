{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "mymul2";
  src = ./.;

  buildInputs = with pkgs; [
    catch2
    cmake
    gtkmm4
    pkg-config
  ];

  doCheck = true;

}

