{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "mycalc-errno";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
    plog
  ];

}

