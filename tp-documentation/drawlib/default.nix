{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "drawlib";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
  ];

}

