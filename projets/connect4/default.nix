{ pkgs ? import <nixpkgs>{} }:

let
  url-compat = "https://github.com/NixOS/nixpkgs/archive/refs/tags/25.11.tar.gz";
  pkgs-compat = import (fetchTarball  url-compat) {};

in pkgs.stdenv.mkDerivation {
  name = "caesar-cipher";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
    doxygen
    pkgs-compat.mdbook
    pkgs-compat.mdbook-katex
  ];

  doCheck = true;

}

