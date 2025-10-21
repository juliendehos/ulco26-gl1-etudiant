{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
  name = "drawlib-dot";
  src = ./.;

  buildInputs = with pkgs; [
    gnumake
    graphviz
  ];

  installPhase = ''
    mkdir -p $out/images
    cp *.svg $out/images/
  '';

}

