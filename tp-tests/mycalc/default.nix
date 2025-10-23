{ pkgs ? import <nixpkgs>{} }:

pkgs.stdenv.mkDerivation {
  name = "mycalc";
  src = ./.;

  buildInputs = with pkgs; [
    catch2_3
    cmake
  ];

  doCheck = true;

}

