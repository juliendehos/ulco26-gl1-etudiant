{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "rle";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
    doxygen
    mdbook
    mdbook-katex
    plog
  ];

  doCheck = true;

}

