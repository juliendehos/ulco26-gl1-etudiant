{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "hello";
  src = ./.;

  buildInputs = with pkgs; [
    cmake
  ];

}

