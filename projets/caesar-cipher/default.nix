{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "caesar-cipher";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
    doxygen
    mdbook
    mdbook-katex
  ];

  doCheck = true;

}

