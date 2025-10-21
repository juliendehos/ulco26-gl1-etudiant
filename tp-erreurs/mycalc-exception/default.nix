{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "mycalc-exception";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
    plog
  ];

}

