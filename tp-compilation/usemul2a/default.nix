{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "usemul2a";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
  ];

}

