{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
  name = "drawlib-mdbook";
  src = ./.;

  buildInputs = with pkgs; [
    mdbook
    mdbook-emojicodes
    mdbook-katex
  ];

  buildPhase = ''
    mdbook build
  '';

  installPhase = ''
    mkdir -p $out
    cp -r book $out/
  '';

}


