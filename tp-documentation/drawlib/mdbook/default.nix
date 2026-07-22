{ pkgs ? import <nixpkgs> {} }:

let
  url-compat = "https://github.com/NixOS/nixpkgs/archive/refs/tags/25.11.tar.gz";
  pkgs-compat = import (fetchTarball  url-compat) {};

in pkgs.stdenv.mkDerivation {
  name = "drawlib-mdbook";
  src = ./.;

  buildInputs = with pkgs; [
    pkgs-compat.mdbook
    pkgs-compat.mdbook-emojicodes
    pkgs-compat.mdbook-katex
  ];

  buildPhase = ''
    mdbook build
  '';

  installPhase = ''
    mkdir -p $out
    cp -r book $out/
  '';

}


