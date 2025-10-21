{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
  name = "drawlib-doxygen";
  src = ./.;

  buildInputs = with pkgs; [
    doxygen
  ];

  buildPhase = ''
    doxygen
  '';

  installPhase = ''
    mkdir $out
    cp -r html $out/
  '';

}

